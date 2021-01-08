#include<bits/stdc++.h>
using namespace std;
char tree[20];
int root(char c){
	
	if(tree[0] != '\0')
		cout<<"Already has a root";
	else 
		tree[0] = c;
	return 0;
}
int set_leftChild(int parent,char c){
	if(tree[parent] =='\0')
		cout<<"No parent";
	else 
		tree[2*parent + 1] = c;
	return 0;
}
int set_rightChild(int parent,char c){
	if(tree[parent] =='\0')
		cout<<"No parent";
	else 
		tree[2*parent + 2] = c;
	
	return 0;
}
int printTree(){
	cout<<"\n\n\n";
	for(int i = 0; i < 20; i++){
		if(tree[i]!='\0')
			cout<<tree[i];
		else
			cout<<"_";
	}
	return 0;
}
int main(){
	
	
	
	set_leftChild(3,'F');
	set_rightChild(0,'G');
	set_rightChild(1,'H');
	set_rightChild(2,'I');
	set_rightChild(4,'J');
	
	printTree();
	
}
