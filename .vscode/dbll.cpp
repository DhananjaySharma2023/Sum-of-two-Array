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
	Node* four=NULL;
	
	one = new Node();
	two = new Node();
	three =  new Node();
	four = new Node();
	one->value=69;
	two->value=56;
	three->value=88;
	four->value=99;
	
	one->Next=two;
	two->Next=three;
	three->Next=four;
	four->Next=one;
	
	one->Prev=four;
	two->Prev=one;
	three->Prev=two;
	four->Prev = three;
	
	Head=NULL;
	Tail=four;
	while(Head !=NULL)
	{
		cout<<Tail->value<<"\t";
		Tail=Tail->Prev;
	}
}
