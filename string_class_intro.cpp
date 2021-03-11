#include <iostream>
#include <string>
using namespace std;

int main ()
{
	//String initialization

	string s0;
	string s1("Hello");
	string s2= "Hello World!";
	string s3(s2); //Copying s2 to s3
	string s4=s3; //This is another way of copying

	char a[]={'a','b','c','\0'};
	string s5(a);

	cout<<s0<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;

	//To check if a string is empty or not

	if(s0.empty())
	{
		cout<<"s0 is empty"<< endl;
	}

	//Append a string

	s0.append("I like C++");
	cout<<s0<<endl;
	s0+=" and Python";
	cout<<s0<<endl;

	//Remove or erase a string completely
	cout<<s0.length()<<endl;
	s0.clear();
	cout<<s0.length()<<endl;

	//Comparing 2 strings lexicographically

	s0="Apple";
	s1="Mango";
	cout<<s1.compare(s0)<<endl; //This returns 0 if strings are equal or >0 or <0.

	//Overloaded operator
	if(s1>s0)
	{
		cout<<"Mango is lexi greater than Apple" <<endl;
	}

	//To check an element at particular index 
	cout<<s0[0]<<endl;

	//Finding Substring

	string s="I would like to have apple juice";
	int idx=s.find("apple");
	cout<<idx<<endl;

	//Remove a word from a string
	string word="apple";
	int len= word.length();
	cout<<s<<endl;
	s.erase(idx,len+1); //This removes apple from s
	cout << s <<endl;

	//Iterate over all characters in a string

	for(int i=0;i<s1.length();i++)
	{
		cout<<s1[i]<<":" <<endl;
	}

	//Iterating using Iterators

	for(auto it=s.begin(); it!=s.end() ;it++) //The auto keyword automatically defines the data type for the varaible .
	{
		cout<<(*it)<<"," ;

	}

	//Using for each loop

	for(auto c:s1)
	{
		cout<<c<<"." ;
	}


}