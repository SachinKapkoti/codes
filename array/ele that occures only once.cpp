class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int res=arr[0];
        int n=arr.size();
        for(int i=1;i<n;i++)
            res^=arr[i];
         return res;
        
    }
};