//1.local minima or maxima
//2. for(i<n-1)
//3. we iterate if a[i]>=a[i+1] ie if current is greater than next we continue.
//4.else buy
//5. iterate if a[i-1]<=a[i] we continue, current smaller than prev.

#include <bits/stdc++.h> 
using namespace std; 
  
//function finds the buy sell 
// schedule for maximum profit 
void findProfit(int array1[], int n) 
{ 
    //Practise Yourself : Write your code Here
    int i=0;
    while(i<n-1){
        while(array1[i]>=array1[i+1])
        i++;
        
        if(i==n-1)
        break;
        
        int buy=i++;
        
        while(array1[i-1]<=array1[i])
        i++;
        
        int sell=i-1;
        
        cout<<"buy on day :" << buy<<" "
        <<"sell on day: " <<sell<<endl;
     
    }
    
} 
  
int main() 
{ 
    int array1[] = { 98, 178, 250, 300, 40, 540, 690 }; 
    int n = sizeof(array1) / sizeof(array1[0]); 
  
    findProfit(array1, n); 
  
    return 0; 
} 


/* Try more Inputs
case 1: 
actual = findProfit([7,1,5,3,6,4],6)
expected = 2

Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3

case2: 
 actual = findProfit([1,2,3,4,5],5)
 expected = 4
 Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4
 
case3: 
actual = findProfit([7,6,4,3,1],5)
expected = 0
In this case, no transaction is done, i.e., max profit = 0
*/