#include<iostream>
#include<map>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
 {
    int n,c,a,b;
    cin>>a>>b;
    map<int,int>c;
    c[1]="one"
    c[2]="two"
    c[3]="three"
    c[4]="four"
    c[5]="five"
    c[6]="six"
    c[7]="seven"
    c[8]="eight"
    c[9]="nine"
    for(int i=a; i<=b;i++)
    {
         if(n<=9)
    {
        cout<<display[n];
    }
    else if(n>9 && n%2==0)
    {
        cout<<"even";
    }
    else if(n>9 && n%2!=0)
    {
        cout<<"odd";
    }
    
    }
   
    return 0;
}

