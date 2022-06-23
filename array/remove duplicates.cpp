#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   int removeDuplicates(vector<int>& nums) {
      //Write your code here
      int n=nums.size();
      int l=0;
      for(int r=1;r<n;r++)
      {
          if(nums[r]!=nums[l])//  compare 2 value with 1st value 
          l++;
          nums[l]=nums[r]     ;   //we put new found element inplace
          
      }
      return l+1;      //index starts with zero
   
   }
};
int main(){
   Solution ob;
   vector<int> v = {0,0,0,1,1,1,1,2,3,3};
   cout << ob.removeDuplicates(v);
}
