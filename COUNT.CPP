#include<iostream.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

int main()
{
	char line[200];
	int wd=0, ch=0, dc=0, sp=0, sc=0;
	cout<<"\nEnter a line of text: \n";
	cin.getline(line, 200);
	cout<< strlen(line);
	for(int i=0; i< strlen(line); i++)
	{
	if (isalpha(line[i]))
	ch++;
	else if(isdigit(line[i]) )
	dc++;
	else if (isspace(line[i]))
	sc++
	else
	sp++;
       }
	for(int j=0; j<strlen(line); j++)
	{
	if ((j==0 && !isspace(line[j])) || (isspace(line[j-1]) && !isspace(line[j])))
	{
	wd++;
	}
	}
cout<<"\nword count: "<<wd<<"\n";
cout<<"\nch count:  "<<ch<<"\n";
cout<<"\ndigit count: "<<dc<<"\n";
cout<<"\nspecial char count: "<<sp<<"\n";
cout<<"\nspace count: "<<sc<<"\n";
return 0;
}
