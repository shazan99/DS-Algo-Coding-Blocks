#include <iostream>
using namespace std;

//read a sentence or a paragraph and store it
//cin.get() reads a single character
//Put a loop to read characters till you get get a new line '\n'

void readline(char a[], int maxlen, char delim='\n') //Delimeter is used as a stopping condition
{
	int i=0;
	char ch=cin.get();
	while(ch!=delim)
	{
		a[i]=ch;
		i++;
		if(i==(maxlen-1))
		{
			break;
		}
		ch = cin.get();
	}

	//once out of the loop
	a[i]='\0';
	return;
}

int main()
{
	char a[1000];
	// readline(a,1000,'$'); //We don't have to use this function,cin.getline() does exactly the same thing as this function
	cin.getline(a,1000,'$'); //This is inbuilt function to save time, if we don't give '$' here it stops at new line '\n' by default
	cout<< a <<endl;
	return 0;
}