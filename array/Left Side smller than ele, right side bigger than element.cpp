#include <bits/stdc++.h> 
using namespace std; 
  
int findElement(int arr[], int n) 
{ 
    
      int lmax[n]; 
    lmax[0]=INT_MIN;
    
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],arr[i-1]) ;// one step back ka check
    }
    int rmin=INT_MAX;
    
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>lmax[i] && rmin>arr[i]) //ele greater tahn left max and 
                                           // smaller rthan min ele on thre right//
           return i;
         
        rmin=min(rmin,arr[i]);

    }
    return -1;
}
 
  

int main() 
{ 
    int arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9}; 
    int n = sizeof arr / sizeof arr[0]; 
    cout << "Index of the element is " << findElement(arr, n); 
    return 0; 
} 

/* Try more Inputs

findElement(array, length_of_array)


case1: 
actual = findElement([5, 1, 4, 3, 6, 8, 10, 7, 9],9)
expected = 4

case2: 
actual = findElement([6, 2, 5, 4, 7, 9, 11, 8, 10],9)
expected = 4

case3:
actual = findElement([5, 1, 4, 4],4)
expected = -1

*/