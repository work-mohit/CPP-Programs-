#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* right;
	Node* left;
};

Node* createNode(int data){
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data= data;
	newNode->left = newNode->right = NULL;
}


Node* levelOrder(Node* root, int data){
	if(root == NULL){
		root =createNode(data);
		return root;
	}
	if(root->data >= data){
		root->left = levelOrder(root->left,data);
		
	}
	else{
		root->right = levelOrder(root->right,data);
		
	}
	return root;
		
}


Node* constructBST(int arr[], int n){
	if(n == 0) return NULL;
	
	Node* root = NULL;
	
	for(int i =0; i < n; i++){
		root = levelOrder(root, arr[i]);
	}
	return root;	
}
void inorderTraversal(Node* root) 
{ 
    if (!root) 
        return; 
      
    inorderTraversal(root->left); 
    cout << root->data << " "; 
    inorderTraversal(root->right);     
}

int main(){
	int arr[] = {7, 4, 12, 3, 6, 8, 1, 5, 10}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
      
    Node *root = constructBST(arr, n); 
      
    cout << "Inorder Traversal: "; 
    inorderTraversal(root); 
    return 0; 
}

