class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int, int> m;
        int res = 0;
        for(int i = 0; i < n; i++){
            int s = k - arr[i];
            if(m[s]) res += m[s];
            m[arr[i]]++;
        }
        return res;
    }
};
