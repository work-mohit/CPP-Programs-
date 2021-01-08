// C++ program to print BST in given range 
#include<bits/stdc++.h> 
using namespace std; 

/* A Binary Tree node */
class TNode 
{ 
	public: 
	int data; 
	TNode* left; 
	TNode* right; 
}; 

TNode* newNode(int data); 

/* A function that constructs Balanced 
Binary Search Tree from a sorted array */
TNode* sortedArrayToBST(int arr[],int start, int end) 
{ 
	if(start > end)
		return NULL;
	
	int mid = (start + end)/2;
	TNode* root = newNode(arr[mid]);
	
	root->left = sortedArrayToBST(arr,start,mid-1);
	
	root->right = sortedArrayToBST(arr,mid+1,end);
	
	return root;
} 

/* Helper function that allocates a new node 
with the given data and NULL left and right 
pointers. */
TNode* newNode(int data) 
{ 
	TNode* node = new TNode(); 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 

	return node; 
} 

/* A utility function to print 
preorder traversal of BST */
void preOrder(TNode* node) 
{ 
	if (node == NULL) 
		return; 
	preOrder(node->left);
	 
	 
	preOrder(node->right); 
	cout << node->data << " ";
} 

// Driver Code 
int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5, 6, 7}; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	/* Convert List to BST */
	TNode *root = sortedArrayToBST(arr, 0, n-1); 
	cout << "PostOrder Traversal of constructed BST \n"; 
	preOrder(root); 

	return 0; 
} 

// This code is contributed by rathbhupendra 

