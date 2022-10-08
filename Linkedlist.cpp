#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
	public: 
	int value;
	Node* next;
};
int main()
{
	Node* head;
	Node* one= NULL;
	Node* two= NULL;
	Node* three= NULL;
	Node* four=  NULL;
	
    // allocating new values
    one = new Node();
    two = new Node();
    three = new Node();
    four = new Node();
    
    // assign new values 
    one->value=69;
    two->value=36;
    three->value=99;
    //connecting the nodes
    one->next=two;
    two->next=three;
    three->next=four;
    four->next= NULL;
    
    head = one;
    while(head != NULL)
    {
    	cout<<head->value;
    	head=head->next;
    	
	}
    return 0;
	
}

