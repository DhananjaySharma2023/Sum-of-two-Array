#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i = 1;
	
	while(i<=n)
	{                           //First triangle
		int j = 1;
		while(j<=n-i+1)
		{
			cout<<j;
			j=j+1;
		}
		int star =2*(i-1);
		while(star)
		{
			cout<<"*";
		    star=star-1;
		}
		while(j<=n-i+1)
		{
			cout<<(n-i-j+2);
			j=j+1;
		}
		int num = n-i+1;
		while(num)
		{
			cout<<num;
			num=num-1;
		}
		cout<<endl;
		i=i+1;
	}
}
