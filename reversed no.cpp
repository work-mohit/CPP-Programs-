#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        stack<int> s;
        bool neg = true;
        if(x < 0){
            x = -x;
        }
        while(x % 10 == 0){
            x = x / 10;
        }
        
        while(x){
            s.push(x%10);
        }
        int new_n = 0;
        while(!s.empty()){
            new_n = new_n * 10 + s.top();
            s.pop();
        }
        if(neg)
            return -new_n;
        return new_n;
    }
};
int main(){
	Solution s;
	int x = s.reverse(56);
	cout<<x;
	return 0;
}

