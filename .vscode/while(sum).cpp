#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
 {
 	public:
 		int value;
 		Node* Next;
 };
 
 int main()
 {
 	Node* head;
 	Node* one= NULL;
 	Node* two= NULL;
 	Node* three= NULL;
 	Node* four= NULL;
 	
 	one = new Node();
 	two = new Node();
 	three = new Node();
 	four = new Node();
 	
 	one->value= 67;
 	two->value= 76;
 	three->value= 58;
 	four->value= 98;
 	
 	one->Next=two;
 	two->Next=three;
 	three->Next=four;
 	four->Next=NULL;
 	
 	head = one;
 	while(head != NULL)
{
	cout<<head->value<<"\t";
	head=head->Next;
	
	 } 	
 }
