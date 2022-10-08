#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int value;
		Node* Next;
		Node* Prev;
};

int main()
{
	Node* Head;
	Node* Tail;
	Node* one=NULL;
	Node* two=NULL;
	Node* three=NULL;
	
	one = new Node();
	two = new Node();
	three =  new Node();
	
	one->value=69;
	two->value=56;
	three->value=88;
	
	one->Next=two;
	two->Next=three;
	three->Next=NULL;
	
	one->Prev=NULL;
	two->Prev=one;
	three->Prev=two;
	
	Head=one;
	Tail=three;
	while(Head !=NULL)
	{
		cout<<Tail->value<<"\t";
		Tail=Tail->Prev;
	}
}
