#include<iostream>
using namespace std;

main()
{
	int a[10],max=-1,n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
	 cin>>a[max];
	 max=max+1;
   }
	
		for(i=0;i<=n;i++)
	{
	 cout<<a[max];
	 max=max-1;
   }
	
}
