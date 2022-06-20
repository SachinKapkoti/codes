1.traverse from left a[i]>a[i-1] ,a[1]>a[0], rating++
2. from right a[i-1]>a[i+1] ,a[end-1]>a[end], rating++
3.max (left n right) 


class Solution {
public:
    int candy(vector<int>& ratings) {
        
        int n=ratings.size();
        vector<int> froml(n,1);
        vector<int> fromr(n,1);
        // vector<int> left(n, 1);
        
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
                froml[i]=froml[i-1]+1;       
        }
        
        
    
       for(int i=n-2;i>=0;i--)
       {if(ratings[i]>ratings[i+1])
               fromr[i]=fromr[i+1]+1;
       }
        int r=0;
        for(int i=0;i<n;i++)
            r+=max(froml[i],fromr[i]);

        return r;
}
    
    
};