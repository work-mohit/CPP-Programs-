#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 3;
bool visited[N];
int sum = 0;
set<int> s;
vector<int> g[N];
void addEdge(int v, int u){
	g[v].push_back(u);
	sum += 1;
	s.insert(v);
	s.insert(u);
}
int countEdges(){
	for(int i = 0; i < s.size();i++){
		sum += g[i].size();
	}
	return sum/2;
}
int main(){
	addEdge(0, 1 ); 
    addEdge(0, 7 ); 
    addEdge(1, 2 ); 
   addEdge(1, 7 ); 
   addEdge(2, 3 ); 
    addEdge(2, 8 ); 
    addEdge(2, 5 ); 
    addEdge(3, 4 ); 
    addEdge(3, 5 ); 
    addEdge(4, 5 ); 
	addEdge(5, 6 ); 
	addEdge(6, 7 ); 
    addEdge(6, 8 ); 
    addEdge(7, 8 ); 
    cout<<countEdges();
    if(s.size()-1 >= countEdges())
    	cout<<"No Cycle";
    else{
    	cout<<"Cycle";
	}
}
