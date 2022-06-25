class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
       
        int n=prices.size();
        int buy,sell;
        int profit=0;
   
        for(int i=0;i<n;i++)
    {    
            while(i<n-1 && prices[i]>=prices[i+1])
            i++; 
            buy=prices[i];

            while(i<n-1 && prices[i+1]>=prices[i])
            i++;

            sell=prices[i];

            profit+=sell-buy;

       }
        return profit;
        
     }

    
   };