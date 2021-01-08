/*This is the iterative approach for implementing bfs in tree */

#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+3;
bool visited[N];
vector<int> g[N];
queue<int> que;
void addEdge(int v, int u){
	g[v].push_back(u);
}
void bfs_iterative(int n){
//	queue<int> que;
	que.push(n);
	visited[n] = 1;
	while(!que.empty()){
		int f = que.front();
		que.pop();
		
		cout<<f<<" ";
		for(int x: g[f]){
			if(!visited[x]){
				visited[x]=1;
				que.push(x);
			}
				
		}
	
	}
}
void bfs_recursive(int n){
//	queue<int> que;
	if(que.empty())
		return;
	visited[n]= 1;
	int v = que.front();
	que.pop();
	cout<<v<<" ";
	for(int x:g[v]){
		if(!visited[x]){
			visited[x]=1;
			que.push(x);
		}
		
	}
	bfs_recursive(que.front());
}
int main(){
	addEdge(0, 1); 
    addEdge(0, 2); 
    addEdge(1, 2); 
    addEdge(2, 0); 
    addEdge(2, 3); 
    addEdge(3, 3);
    addEdge(3, 4);
    addEdge(4, 5);
    addEdge(5, 3);
    addEdge(2, 5);
 	que.push(2);
    bfs_recursive(2);
//	bfs_iterative(2);
}

