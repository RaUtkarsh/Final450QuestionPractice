#include<iostream>
using namespace std;

void reverse(int* arr, int n){
	int s = 0, e = n - 1;
	while(s <= e){
		int temp = arr[s];
		arr[s] = arr[e];
		arr[e] = temp;
		
		s++;
		e--;
	}
}

void printArray(int* arr, int n){
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main(){
	
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Array before: " << " ";
	printArray(arr, n);
	reverse(arr, n);
	cout << "Array after: " << " ";
	printArray(arr, n);
}
