//finding an element in matrix

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0; int high =m*n-1;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            int mid_val=matrix[mid/n][mid%n];
            if(mid_val==target)
                return true;
            else if(target<mid_val)
                high=mid-1;
            else
                low=mid+1;
        }
        return false;
            
            
        }
        
};