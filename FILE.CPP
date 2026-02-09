#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<fstream.h>
int main(){
	char str[100];
	ifstream in("sample1.txt");
	ofstream out("sample2.txt");
	in.getline(str, 100);
	strrev(str);
	out<<str;
	in.close();
	out.close();
	getch();
	return 0;

}
