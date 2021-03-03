#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
char data;
struct node *next;
}*top=NULL,*pstart=NULL;


void insert(char ch)
{
struct node *t,*first;
    first=(struct node *)malloc(sizeof(struct node));
    first->next=NULL;
    first->data=ch;
    t=pstart;

    if(pstart==NULL)
    {
    pstart=first;
    }
    else
    {
    while(t->next!=NULL)
    t=t->next;
    t->next=first;

    }
    printf(" checking if inserted in list: %c\n",first->data);

}

void push (char symbol)
{

    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=symbol;
    if(top==NULL)
    {
     top=p;
     p->next=NULL;

    }
    else
    {

    p->next=top;
    top=p;

    }
}

char  pop()
{
struct node *x,*y;
char k;
if(top==NULL)
{
    printf("stack underflow\n");
    return 0;

}
else
{
x=top;
top=top->next;
k=x->data;
free(x);
x=NULL;
return k;


}



}


void print_postf()
{
    struct node *to;
    if(pstart==NULL)
    printf("");
    else
    {
    to=pstart;
    printf("Equivalent postfix exp is : \n");
    while(to!=NULL)
    {
        printf("%c",to->data);
        to=to->next;

    }

    }


}

int precedence(char ch)
{

if(ch=='^')
return (5);
else if(ch=='*' || ch== '/')
return (4);
else if (ch== '+' || ch== '-')
return (3);
else
return (2);
}



void inf_to_postf(char infix[])
{

    int len;
    int index=0;
    char symbol,temp;
    len= strlen(infix);
    printf("Length is : %d\n",len);
    while(len>index)
    {
        symbol=infix[index];

        switch(symbol)
        {

        case '(':
        push(symbol);
        break;

        case ')':
        temp=pop();
        while(temp!='(')
        {
        insert(temp);
        temp=pop();
        }
        break;

        case '^':
        case '+':
        case '-':
        case '*':
        case '/':
        if(top==NULL)
        {
            push(symbol);
    //      break;

        }
        else
        {
        while(top!=NULL && (precedence(top->data)>=precedence(symbol)))
        {
            temp=pop();
            insert(temp);

        }
        push(symbol);

        }
        break;
        default:
        insert(symbol);

         }
         index=index+1;


    }
    while(top!=NULL)
    {
    temp=pop();
    insert(temp);

    }
    print_postf();
    return;




}


int main()
{
char infix[50]; 
printf("enter infix expression: ");
gets(infix);
inf_to_postf(infix);
getchar();
return 0;
}