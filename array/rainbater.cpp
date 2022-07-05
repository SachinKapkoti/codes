#include <bits/stdc++.h> 
using namespace std; 
  
int storeWater(int array1[], int n) 
{ 
    // left[i] contains height of tallest bar to the 
    // left of i'th bar including itself 
    int left[n]; 
  
    // Right [i] contains height of tallest bar to 
    // the right of ith bar including itself 
    int right[n]; 
  
    // Initialize result 
    int water = 0; 
  
    // Fill left array1ay 
    left[0] = array1[0]; 
    for (int i = 1; i < n; i++) 
        left[i] = max(left[i - 1], array1[i]); 
  
    // Fill right array1ay 
    right[n - 1] = array1[n - 1]; 
    for (int i = n - 2; i >= 0; i--) 
        right[i] = max(right[i + 1], array1[i]); 
  
    // Calculate the accumulated water element by element 
    // consider the amount of water on i'th bar, the 
    // amount of water accumulated on this particular 
    // bar will be equal to min(left[i], right[i]) - array1[i] . 
    for (int i = 0; i < n; i++) 
        water += min(left[i], right[i]) - array1[i]; 
  
    return water; 
} 
  
int main() 
{ 
    int array1[] = { 5,3,4,6,3,6 }; 
    int n = sizeof(array1) / sizeof(array1[0]); 
    cout << "Maximum water that can be stored is "
         << storeWater(array1, n); 
    return 0; 
}