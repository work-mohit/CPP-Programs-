#include<bits/stdc++.h>
using namespace std;
// Implementing queue using two stacks;
struct Queue{
	stack<int> st1,st2;
	
	
		void enqueue(int data){
			while(!st1.empty()){
				st2.push(st1.top());
				st1.pop();
			}
			st1.push(data);
			while(!st2.empty()){
				st1.push(st2.top());
				st2.pop();
			}
		}
					
		
				
			
		
		int deQueue(){
			if(st1.empty()){
				cout<<"Queue is empty.";
			}
			int x = st1.top();
			st1.pop();
			return x;
				
			
		}
};
int main(){
	Queue q;
	q.enqueue(5);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(6);
	q.enqueue(9);
	q.enqueue(7);
	
	cout << q.deQueue() << '\n'; 
    cout << q.deQueue() << '\n'; 
    cout << q.deQueue() << '\n'; 
	
}
