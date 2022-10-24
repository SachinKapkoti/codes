//Input: nums = [2,3,-2,4]
//Output: 6
//Explanation: [2,3] has the largest product 6.

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        
        int Max=nums[0];
        int Min=nums[0];
        int ans=nums[0];
        int n=nums.size();
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]<0)
            {
                swap(Max,Min);
            }
            Max=max(nums[i],Max*nums[i]);
            Min=min(nums[i],Min*nums[i]);
            
            ans=max(Max,ans);
            
        }
        return ans;
                 
    }
};