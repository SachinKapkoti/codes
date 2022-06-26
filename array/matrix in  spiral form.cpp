class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>res;
        
        int rstart=0;int rend=n-1;
        int colstart=0; int colend=m-1;
        
        while(rstart<=rend && colstart<=colend)
        {
            for(int i=colstart;i<=colend;i++)
                res.push_back(matrix[rstart][i]);
                rstart++;
            
            for(int i=rstart;i<=rend;i++)
                res.push_back(matrix[i][colend]);
                colend--;
            
            if(rstart<=rend)
            {
                for(int i=colend;i>=colstart;i--)
                    res.push_back(matrix[rend][i]);
                    rend--;
            }
            if(colstart<=colend)
            {
                for(int i=rend;i>=rstart;i-- )
                   res.push_back(matrix[i][colstart]);
                   colstart++;
            }
            
        }
       return res;
        
        }
    
    
    
};