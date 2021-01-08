#include<bits/stdc++.h>
using namespace std;
const int N = 10000 + 3;
bool visited[N];
vector<int> g[N];




int main(){
	int t, n , x , y , sum = 0;
	cin>>t;
	while(t--){
		cin>>n;
		
		for(int i = 0; i < n; i++){
			cin>>x>>y;
			visited[x]= true;
			visited[y]= true;
		}
		for(int j = 0; j < N; j++){
			if(visited){
				visited[j] = false;
				sum++;
			}
		}
		cout<<sum;
	}
	
	
}
