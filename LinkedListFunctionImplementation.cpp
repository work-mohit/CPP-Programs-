#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
	Node(){
		next = NULL;
	}
};
// insert in front
void push(Node** head_ref, int data){
	// making new node
	Node* new_node = new Node();
	new_node->data = data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
	
}

// insert at end 
void append(Node** head_ref, int data){
	Node* new_node = new Node();
	new_node->data = data; 
	new_node->next = NULL;
	Node* p = *head_ref;
	
	/* 4. If the Linked List is empty,
    then make the new node as head */
    if (*head_ref == NULL)  
    {  
        *head_ref = new_node;  
        return;  
    }  
  
	while(p->next != NULL){
		p = p->next;
	}
	p->next = new_node;
	
	return;
}
// insert after a element
void insertAfter(Node** head_ref,int element,int data){
	Node* new_node = new Node();
	new_node->data = data;
	Node* p = *head_ref;
	
	while(p->data != element){
		p = p->next;
	}
	new_node->next = p->next;
	p->next = new_node;
}
void del(Node** head_ref, int data){
	Node* back_pointer;
	Node* p;
	p = *head_ref;
	if(p == NULL)
		cout<<"Linked list is alreay empty, there is no item to be deleted.";
	while(p->data != data && p->next != NULL){
		back_pointer = p;
		p= p->next;
		
	}
	
	if(p == NULL) 
		back_pointer = p;
		return;
	
	back_pointer->next = p->next;
//	p->next = NULL;
	free(p);	
}

void printList(Node* node)  
{  
    while (node != NULL)  
    {  
        cout<<node->data<<" ";  
        node = node->next;  
    }  
} 
void reverse(Node** head_ref){
	Node* current = (*head_ref);
	Node *prev = NULL, *next = NULL;
	while (current != NULL) { 
            // Store next 
            next = current->next; 
  
            // Reverse current node's pointer 
            current->next = prev; 
  
            // Move pointers one position ahead. 
            prev = current; 
            current = next; 
        } 
	(*head_ref)= prev;
	
}
//void reverseKGroup(Node* head_ref, int k ){
//	if (!head || !head->next || k <= 1) {
//        return head;
//    }

//}
void middleElement(Node* head){
//	Node* slow_ptr= head;
//	Node* fast_ptr= head;
//	if(head != NULL){
//		while(fast_ptr !=NULL && fast_ptr->next != NULL){
//			fast_ptr = fast_ptr->next->next;
//			slow_ptr = slow_ptr->next;
//			
//		}
//		cout<<slow_ptr->data;
//	}
	 int count = 0; 
    Node *mid = head; 
  
    while (head != NULL) 
    { 
        /* update mid, when 'count' is odd number */
        if (count & 1)  
            mid = mid->next; 
  
        count++; 
        head = head->next; 
    } 
    if (mid != NULL) 
        printf("The middle element is [%d]\n\n", mid->data); 
}
Node* reverseKNode(Node* head_ref, int k){
//	Node* saver, *ptr
//	ptr = *head_ref
//	while(k--){
//		saver = ptr->next;
//		ptr = ptr->next;
//		if(k == 1)
//			ptr->next = NULL;
//	}
	Node* current = head_ref;  
    Node* prev=NULL;
    Node* next = NULL;  
    int count = 0;  
      
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)  
    {  
        next = current->next;  
        current->next = prev;  
        prev = current;  
        current = next;  
        count++;  
    }  
      
    /* next is now a pointer to (k+1)th node  
    Recursively call for the list starting from current.  
    And make rest of the list as next of first node */
    if (next != NULL)  
    head_ref->next = reverseKNode(next, k);  
  
    /* prev is new head of the input list */
    return prev;  
}







int main(){
	Node* head = NULL;  
      
//    // Insert 6. So linked list becomes 6->NULL  
//    append(&head, 6);  
//    printList(head);
//	cout<<endl; 
//    // Insert 7 at the beginning.  
//    // So linked list becomes 7->6->NULL  
//  push(&head, 7);  
//    printList(head);
////	push(&head, 9);
//	cout<<endl;     
//    // Insert 1 at the beginning.  
//    // So linked list becomes 1->7->6->NULL  
//  //  push(&head, 1);  
//    printList(head); 
//	cout<<endl;  
//    // Insert 4 at the end. So  
//    // linked list becomes 1->7->6->4->NULL  
//    append(&head, 4);
//	printList(head); 
//	cout<<endl;    
//	append(&head, 2);
//	append(&head, 3);
//    // Insert 8, after 7. So linked  
//    // list becomes 1->7->8->6->4->NULL  
//    insertAfter(&head, 7, 8);
//    
////    cout<<"Created Linked list is: ";  
//	printList(head);  
//    cout<<endl;
//    cout<< "deleting element 9";
//    del(&head, 4);
//    cout<<endl;
//    printList(head);  
//    
//    cout<<endl;
//    cout<<"after reversing ";
//    reverse(&head);
//    printList(head);
//    cout<<endl;
    //middleElement(head);
    //cout<<endl;
    push(&head, 10); 
	push(&head, 9); 
	push(&head, 8); 
	push(&head, 7); 
	push(&head, 6); 
	push(&head, 5); 
	push(&head, 4); 
	push(&head, 3); 
	push(&head, 2); 
	push(&head, 1); 
	head = reverseKNode(head,5);
    printList(head);
	return 0; 
}

