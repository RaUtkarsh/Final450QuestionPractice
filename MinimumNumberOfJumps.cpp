#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n==1) return 0;
        else if(arr[0] == 0) return -1;
        else{
            int maximumReach = arr[0], maximumStep = arr[0], j = 1;
            for(int i = 1; i < n; i++){
                if(i == n-1) return j;
                
                maximumReach = max(maximumReach, i+arr[i]);
                maximumStep--;
                if(maximumStep == 0){
                    j++;
                    if(i >= maximumReach) return -1;
                    maximumStep = maximumReach - i;
                }
            }
        }
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
