Input: nums = [3,2,1,5,6,4], k = 2
Output: 5




//class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //step 1:min heap
        //put in next largest
        
        priority_queue<int,vector<int>,greater<int>>pq;
            
       for(int i=0;i<k;i++)    
        {
            pq.push(nums[i]);
            
        }
        int n=nums.size();
        
        for(int i=k;i<n;i++)
        {
            if(nums[i]>pq.top())
            {   pq.pop();
               pq.push(nums[i]);
        }  
        }
        int ans=pq.top();
       return ans;
    
    }
};