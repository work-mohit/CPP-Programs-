// CPP code to print BST keys in given Range in 
// constant space using Morris traversal. 
#include <bits/stdc++.h> 

using namespace std; 

struct node { 

	int data; 
	struct node *left, *right; 
}; 

// Function to print the keys in range 
// This is implementation which uses O(n)time and O(n) space 
void RangeTraversal(node* root,int n1, int n2){
	if(root == NULL)return;
	
	if(n1 < root->data)
		RangeTraversal(root->left,n1,n2);
	
	cout<<root->data<<" ";
	
	if(n2 > root->data)
		RangeTraversal(root->right,n1,n2);
}
	
		


// Helper function to create a new node 
node* newNode(int data) 
{ 
	node* temp = new node; 
	temp->data = data; 
	temp->right = temp->left = NULL; 

	return temp; 
} 

// Driver Code 
int main() 
{ 

	/* Constructed binary tree is 
	   4 
	  / \ 
	 2	 7 
	/ \ / \ 
	1 3 6 10 
*/

	node* root = newNode(4); 
	root->left = newNode(2); 
	root->right = newNode(7); 
	root->left->left = newNode(1); 
	root->left->right = newNode(3); 
	root->right->left = newNode(6); 
	root->right->right = newNode(10); 

	RangeTraversal(root, 2, 7); 
	
	return 0; 
} 

