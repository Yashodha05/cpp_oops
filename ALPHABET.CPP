#include<iostream.h>
#include<ctype.h>

void checkAlphabet(char a, char &result)
{
	if(a=='a'|| a=='e'|| a=='i'|| a=='o' || a=='u' || a=='A'|| a=='E'|| a=='O'|| a=='U')
	{
		result=a-1; //return its precedor
		cout<<a<<"is vowel"<<"its precedor is "<<result<<endl;
	}
	else
	{
		result=a+1; // return its sucessor
		cout<<a<<"is consonant"<<"its successor is"<<result<<endl;
	}
}
int main()
{
	char a, result;
	cout<<"enter an alphabet";
	cin>>a;
	if (!isalpha(a))
	cout<<"enntered char is not an alphabet"<<endl;
	else
	checkAlphabet(a, result);
	return 0;
}