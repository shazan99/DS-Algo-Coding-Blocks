#include<stdio.h>
#include<ctype.h>
char stack[100];
int top = -1;
void push(char ch)
{
    stack[++top] = ch;
}
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
int order(char ch)
{
    if(ch == '(')
        return 0;
    if(ch == '+' || ch == '-')
        return 1;
    if(ch == '*' || ch == '/')
        return 2;
    return 0;
}
int main()
{
    char exp[100];
    char *e, ch;
    scanf("%s",exp);
    e = exp;
    printf("The Postfix exp is : ");
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((ch = pop()) != '(')
                printf("%c ", ch);
        }
        else
        {
            while(order(stack[top]) >= order(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}