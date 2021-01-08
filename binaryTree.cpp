#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
	
};

class BinaryTree{
	public:
		Node* root;
		Node* prev= NULL;
		Node* headDLL=NULL;
		
		void add(int data){
			root = insertInTree(root,data);
		}
		
		Node* insertInTree(Node* root , int data){
			if(root == NULL)
				return root;
				
			if(root->data > data){
				insertInTree(root->left, data);
			
			}
			else if(root->data <= data){
				insertInTree(root->right,data);
			}
			else{
				return root;
			}
			
			return root;	
		
		}
		
		Node* bstToList(Node* root){
			if(root==NULL)
				return root;
			bstToList(root->left);
			if(prev == NULL){
				headDLL = root;
				prev = root;
			}
			else{
				root->left = prev;
				prev->right = root;
				prev = root;
				
			}
			bstToList(root->right);
			return headDLL;
		}
		

};	

void inorder(Node* root){
	if(!root)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}



Node* newNode(int data){

	Node* node = new Node();
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
void printList(Node *root)  
{  
    while (root != NULL)  
    {  
        cout << root->data << " ";  
        root = root->right;  
    }  
}  
void changeToBST(){
	
}
void createArray(){
	
}
void btToBST(){
	
}
int main(){
	BinaryTree bt;
	Node* root = newNode(10);
	
    root->left = newNode(12);  
    root->right = newNode(15);  
    root->left->left = newNode(25);  
    root->left->right = newNode(30);  
    root->right->left = newNode(36);
	inorder(root);
	
	Node* newhead = bt.bstToList(root);
	cout<<endl;
	printList(newhead);
	cout<<newhead->right->left->data;
}

