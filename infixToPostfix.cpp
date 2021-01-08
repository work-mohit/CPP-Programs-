#include<bits/stdc++.h>
using namespace std;
int prec(char a){
	if( a =='^')
		return 2;
	else if(a =='*'||a == '/')
		return 1;
	else if(a =='+'||a == '-')
		return 0;
	else 
		return -1;
}
void infixToPostfix(string s){
	stack<char> st;
	// N is used to pop all element at the last when exp is comleted 
	st.push('N'); 
	int n = s.length();
	string ns;
	for(int i = 0; i < n; i++){
		if( (s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z'))
			ns+=s[i];
		else if(s[i]=='(')
			st.push('(');
		else if(s[i]==')'){
//			while(s[i]!='('){
//				char t = st.top();
//				st.pop();
//				ns += t;
//			}
//			st.pop();
			while(st.top() != 'N' && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
               	ns += c; 
            } 
            if(st.top() == '(') 
            { 
                char c = st.top(); 
                st.pop(); 
            } 
		}
		else{
			while(st.top()!= 'N' && prec(st.top()) >= prec(s[i])){
				char t = st.top();
				st.pop();
				ns += t;
			}
		
				
			st.push(s[i]);
		}	
	}
	while(st.top() !='N'){
		char t = st.top();
		st.pop();
		ns += t;
	}
	cout<<endl<<ns<<endl;
}
int main(){
	string s = "a+b*(c^d-e)^(f+g*h)-i";
	infixToPostfix(s);
	return 0;
}
