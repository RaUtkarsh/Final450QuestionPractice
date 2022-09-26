#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        if(n==1) return 0;
        sort(arr, arr+n);
        int d = arr[n-1] - arr[0];
        for(int i = 0; i < n; i++){
            if(arr[i] - k < 0) continue;
            
            int maximum = max(arr[i-1]+k, arr[n-1]-k);
            int minimum = min(arr[0]+k, arr[i]-k);
            
            d = min(d, maximum - minimum);
        }
        return d;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
