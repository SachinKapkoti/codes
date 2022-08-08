Input:
K = 3
arr[][] = {{1,2,3},{4,5,6},{7,8,9}}
Output: 1 2 3 4 5 6 7 8 9
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<int>ans;
        for(int i=0;i<K;i++)
        {
          for(int j=0;j<K;j++)
          {
              ans.push_back(arr[i][j]);
          }
        }
        sort(ans.begin(),ans.end());
        return ans;
        //k*2 log k
    }
};