class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int N = matrix.size(); 
        //Practise Yourself : Write your code Here
 for(int i=0;i<N;i++)
  {for(int j=0;j<i;j++)
   swap(matrix[i][j],matrix[j][i]);
  }
  
  
   for(int i=0;i<N;i++)
  { reverse(matrix[i].begin(),matrix[i].end());
    
    }
} 
  
    
};