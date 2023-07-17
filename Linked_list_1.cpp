//include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>
#include<stdlib.h>

using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

void Display(Node *head){
	Node* temp = head;
	while(temp != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}

using namespace std;

//Insertion at the beginning
void push1(Node* head,int data){
	struct Node* newnode;
	newnode = malloc(sizeof(struct Node*));
	newnode->data = data;
	newnode->next = (head);
	head = newnode;
}

//At a given point
void push2(Node* head,int k,int data){
	struct Node* newnode = new Node();
	newnode->data = data;
	Node* prev = head;
	while(k-- && prev != NULL){
		prev = prev->next;
	}

	newnode->next = prev;
	prev->next = newnode;
}

//At the end of the Linked List
void push3(Node *head,int data){
	struct Node* newnode = new Node();
	struct Node* last = head;
	newnode->data = data;
	newnode->next = NULL;
	if(head == NULL){
		head = newnode;
		return;		
	} 	
	while(last->next != NULL){
		last = last->next;
	}

	last->next = newnode;
	return;
}

int main(){

	struct Node* head = NULL;
	push1(head,1);
	push1(head,2);
	push2(head,2,3);
	push3(head,4);
	Display(head);

	return 0;
}