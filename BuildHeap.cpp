#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int i){
	int largest = i;
	int l = 2*i + 1;
	
	int r = 2*i + 2;
	
	if(l < r && arr[l] > arr[i])
		largest = l;
	if(r < n && arr[r] > arr[largest])
		largest = r;
	if(largest != i){
		int swap = arr[i]; 
        arr[i] = arr[largest]; 
        arr[largest] = swap; 
		heapify(arr , n , largest); 
	}  
        
        
    
}
void postOrder(int arr[],int n,i){
	postOrder(arr,n,2*i+1)
	postOrder(arr,n,2*i+2)
	cout<<arr[i]<<" ";
}


void buildHeap(int arr[],int n){
	int j= (n/2)-1;
	
	for(int i = j;i>=0;i--){
	
		heapify(arr,n,i);
	}
}

void printHeap(int arr[], int n) 
{ 
    cout << "Array representation of Heap is:\n"; 
  
    for (int i = 0; i < n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 
  
int main(){

	
	int arr[] = {3, 5, 12, 6,17, 13, 10, 9, 8, 1,15 }; 
  
    int n = sizeof(arr) / sizeof(arr[0]); 
    printHeap(arr,n);
    
	buildHeap(arr,n);
	
	printHeap(arr,n);
}

