class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>ans;
       
        
        for(int i=0;i<n;i++)
        {  long long greater=-1;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]>arr[i])
               { greater=arr[j];
               break;
                }
                
            } 
            
        
         ans.push_back(greater);
        }
        return ans;
    }
    
    
};