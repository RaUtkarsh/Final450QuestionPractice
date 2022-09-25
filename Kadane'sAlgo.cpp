#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        
        long long curSum = 0;
        long maxSum = INT_MIN;
        for(int i = 0; i < n; i++){
            curSum = curSum + arr[i];
            if(curSum > maxSum) maxSum = curSum;
            if(curSum < 0){
                curSum = 0;
            }
        }
        return maxSum;
    }
};
int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
