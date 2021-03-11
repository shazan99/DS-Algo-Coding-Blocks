#include <iostream>
#include <cstring>
using namespace std;

char *mystrtok(char *str, char delim){
	//string and single char acts as delimiter
	static char *input= NULL;
	if(str!=NULL)
	{
		//we are making the first call
		input=str;
	}

	//base case
	if(input==NULL)
	{
		return NULL;
	}

	//start extracting tokens and store them in an array
	char *output = new char[strlen(input)+1];  //dynamic array
	int i=0;
	
	for(i=0 ;input[i]!='\0';i++)
	{
		if(input[i]!=delim){
			output[i]=input[i];
		}

		else {
			output[i]='\0';
			input=input+i+1;
			return output;
		}
	}

	//corner case
	output[i]='\0';
	input=NULL;
	return output;
}

int main()
{
	char s[100]= "Today, is a rainy, day";
	char *ptr = mystrtok(s,',');
	cout<<ptr<<endl;

	while(ptr!=NULL)
	{
		ptr=mystrtok(NULL,',');
		cout<<ptr<<endl;
	}
	return 0;


}