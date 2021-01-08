 #include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 3;
bool visited[N];
vector<int> g[N];
void dfs(int n){
	visited[n] = 1;
	cout<<n;
	for(int v: g[n]){
		if(visited[v])
			continue;
		dfs(v);
	}	
		
}
void bfs(int n){
	visited[n] = 1;
	queue<int> que;
	que.push(n);
	while(!que.empty()){
		int frontElement  = que.front();
		que.pop();
		cout<<frontElement<<" ";
		
		for(int x: g[n]){
			if(!visited[x])
				
				que.push(x);
				visited[x] = 1;
				
		}
	}
		
	}
	

void addEdge(int v, int u){
	g[v].push_back(u);
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
    addEdge(5, 2);
    dfs(4);
}
