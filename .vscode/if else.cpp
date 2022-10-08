#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	if(ch>='a' && ch<='z')
	{
		cout<<"This is a Lower Case."<<endl;
	}
	else if(ch>='A' && ch<='Z')
	{
		cout<<"This is a Upper Case."<<endl;
	}
	else
	{
		cout<<"This is Numeric."<<endl;
	}
	return 0;
}
