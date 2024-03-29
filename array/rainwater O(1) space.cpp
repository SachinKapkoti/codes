class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
         int lmax,rmax=0;
         int l=0;
         int r=n-1;
        int ans=0;
        while(l<=r)
        {
            if(arr[l]<=arr[r])
                //ans depends on lmax
              {
                if(arr[l]>=lmax)
                  lmax=arr[l];
                
                 else
                   ans += lmax-arr[l];
                 
                 l++;
                }
            
            else
              {//ans depends on rmax
                if(arr[r]>=rmax)
                  rmax=arr[r];  
                
                else
                   ans += rmax-arr[r];
                    
                r--;
                 }
            }  
        return ans;
        
    }
};