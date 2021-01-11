#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* right;
	Node* left;
};

Node* CreateNode(int data){

    Node* newNode = new Node();
    if (!newNode) {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insertElement(Node* root, int key){
    if(root == NULL){
        root = CreateNode(key);
        return root;
    }
        

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* frontElement = q.front();
        q.pop();
        
        if(frontElement ->left != NULL)
            q.push(frontElement->left);
        else{
            frontElement->left = CreateNode(key);
            break;
        }

        if(frontElement ->right != NULL)
            q.push(frontElement->right);
        else{
            frontElement->right = CreateNode(key);
            break;
        }
    }
    return root;    
}

void inorderTraversal(Node* root){
    if(root == NULL)
        return;
    
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);

}
int main(){
    Node* root = CreateNode(1);
    root->left = CreateNode(2);
    root->right = CreateNode(3);
    root->left->left = CreateNode(4);
    root->right->left = CreateNode(5);
    root->right->right = CreateNode(6);
    inorderTraversal(root);
    cout<<"\nAfter inserting 8 in the first vaccant position that comes in level order traversal:\n";
    insertElement(root, 8);
    inorderTraversal(root);

    return 0;
}