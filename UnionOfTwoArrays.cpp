#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n){
	int j = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] < 0){
			if(i != j){
				swap(arr[i], arr[j]);
			}
			j++;
		}
	}
}

void printArray(int arr[], int n){
	
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main(){
	int arr[] = {1, -10, 12, -18, 15, 13, -25, -13};
	int n = sizeof(arr)/sizeof(arr[0]);
	printArray(arr, n);
	rearrange(arr, n);
	printArray(arr, n);
	
	return 0;
}
