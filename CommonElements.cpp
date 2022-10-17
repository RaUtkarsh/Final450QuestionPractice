class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            
            vector<int> arr;
            vector<int> res;
            
            int i = 0;
            for(int j = 0; j < n1; j++){
                if(j == 0 or A[j] != A[j-1]){
                    arr.push_back(A[j]);
                    i++;
                }
            }
            for(int j = 0; j < n2; j++){
                if(j == 0 or B[j] != B[j-1]){
                    arr.push_back(B[j]);
                    i++;
                }
            }
            for(int j = 0; j < n3; j++){
                if(j == 0 or C[j] != C[j-1]){
                    arr.push_back(C[j]);
                    i++;
                }
            }
            sort(arr.begin(), arr.end());
            for(int k = 0; k < arr.size() - 2; k++){
                if(arr[k] == arr[k+1] and arr[k+1] == arr[k+2]){
                res.push_back(arr[k]);
                k+=2;
                }
            }
            return res;
        }

};
