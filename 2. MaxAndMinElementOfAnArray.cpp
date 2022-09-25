#include<iostream>
using namespace std;
struct Pair{
	int max;
	int min;
};

Pair getMinMax(int* arr, int n){
	struct Pair minMax;
	if(n == 1){
		minMax.min = arr[0];
		minMax.max = arr[0];
		return minMax;
	}
	
	if(arr[0] > arr[1]){
		minMax.min = arr[1];
		minMax.max = arr[0];
	}
	else{
		minMax.min = arr[0];
		minMax.max = arr[1];
	}
	for (int i = 2; i < n; i++){
		if(arr[i] > minMax.max){
			minMax.max = arr[i];
		}
		else if(arr[i] < minMax.min){
			minMax.min = arr[i];
		}
	}
	return minMax;
}

int main(){
	
	int arr[] = {11, 16, 12, 2, 15, 21, 40};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	struct Pair minMax = getMinMax(arr, n);
	
	cout << "Minimum Element: " << minMax.min << endl;
	cout << "Maximum Element: " << minMax.max << endl;
	
	
	return 0;
}
