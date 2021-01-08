 #include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 3;
bool visited[N];
int sum   = 0;
vector<int> g[N];
void dfs(int n){
//	int sum;
	visited[n] = 1;
//	cout<<n;
	for(int v: g[n]){
		if(!visited[v])
			dfs(v);
		sum = sum + 1;
	}	
		
}
	

void addEdge(int v, int u){
	g[v].push_back(u);
}
int main(){
	int n,m,k,p,q;
	cin>>n>>m>>k;
	while(m--){
		cin>>p>>q;
		addEdge(p,q);
	}
    dfs(0);
    if(sum > k)
    	cout<<-1;
    else
    	cout<<m-n+k;
	
}
