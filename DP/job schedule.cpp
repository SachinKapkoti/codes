class Solution {
public:
    
    class job
    {
        public:
         int start,end,profit;
    };
    
    static bool sortFunc(job A,job B){
        return A.end<B.end;
    }
    
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        
        int size=profit.size();
        //job vecort that we wiil sot
        vector<job>jobs(size);
        for(int i=0;i<size;i++)
        {
            jobs[i].start=startTime[i];
            jobs[i].end=endTime[i];
            jobs[i].profit=profit[i];
            
        }
        sort(jobs.begin(),jobs.end(),sortFunc);
        
        //max pofit array
        vector<int>maxprofit(size);
        maxprofit[0]=jobs[0].profit;//one job only
        
        for(int index=1;index<=size-1;index++)      
        {
            int prevProfit=0;
            for(int i=index-1;i>=0;i--)
            {
                if(jobs[i].end<=jobs[index].start)
                {
                    prevProfit=maxprofit[i];
                    break;
                }
                    
            }//excluding current or including current
            maxprofit[index]=max(maxprofit[index-1],prevProfit+jobs[index].profit);
        }
        return maxprofit[size-1];
        
    }
};