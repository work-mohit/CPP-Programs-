// here is my code 
// below my code  i mention someone else code.

#include<bits/stdc++.h>
using namespace std;
string balancedParenthesis(string s){
	stack<char> st;
	int n = s.length();
	st.push('N');
	for(int i = 0;i < n; i++){
		if (s[i]=='(' ||s[i]=='{' ||s[i]=='[')
			st.push(s[i]);
		else{
			if(s[i]==')'){
				if(st.top()=='(')
					st.pop();
				else{
//					cout<<"Exp is not balanced";
					break;
				}
					
			}
			if(s[i]==']'){
				if(st.top()=='[')
					st.pop();
				else{
//					cout<<"Exp is not balanced";
					break;
				}
					
			}
			if(s[i]=='}'){
				if(st.top()=='{')
					st.pop();
				else{
//					cout<<"Exp is not balanced";
					break;
				}
					
			}
				
		}
	}
	if(st.top() == 'N'){
		return "YES";
	}
	else{
		return "NO";
	}
	

}
int main(){
	int t;
	cin>>t;
	cout<<endl;
	while(t--){
		
		string s;
		getline(cin,s);
	
		string res = balancedParenthesis(s);
		cout<<res;
	}
}

/*
#include <stack>
#include <string>
#include <iostream>

using namespace std;

string isBalanced(string s) {
    stack<char> st;  
    
    for (auto c: s) {
        switch (c) {
            case '{':
            case '(':
            case '[':
                st.push(c);
                break;
            case '}':
                if (st.empty() || (st.top() != '{')) {
                    return "NO";
                }
                st.pop();
                break;
            case ')':
                if (st.empty() || (st.top() != '(')) {
                    return "NO";
                }
                st.pop();
                break;
            case ']':
                if (st.empty() || (st.top() != '[')) {
                    return "NO";
                }
                st.pop();
                break;
        }
    }
    
    return st.empty() ? "YES" : "NO";
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
    return 0;



*/
















