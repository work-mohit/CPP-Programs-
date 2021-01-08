#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
void printList(Node* p){
	while( p->data != NULL){
		cout<<p->data;
		p = p->next;
	}
}
int main(){
	Node* one;
	Node* two;
	Node* three;
	one = new Node();
	two = new Node();
	three = new Node();
	
	one->data = 3;
	one->next = two;
	
	two->data = 5;
	two->next = three;
	
	three->data = 7; 
	three->next = NULL;
	
	Node* head = one;
	printList(head);
}

