#include <iostream>

// Recursive implementation of Binary Search Algorithm to return
// the position of target x in the sub-array array[low..high]
int binarySearch(int array[], int low, int high, int key)
{     
    if(low>high)
   { return -1;
   }
      int m=low+(high-low)/2;  //to avoid stack overflow, //
            //suppose high value is very big and you are adding low which will further increase the value so in 
            //order to avoid that we first do high-low then divide by 2 this will decrease the value.
    
      if (array[m]==key)
   {   return m;
   }
      if(array[m]>key){
        return binarySearch( array,low,m-1,key );
        // m-1 and m+1 becuz mid m ni h toh can
        //only be presnt in left or right of mid.
    }
        
       else
        {
        return binarySearch(array,m+1,high,key);
        }
    
}
 
// Recursive implementation of Binary Search Algorithm
int main(void)
{
    int array[] = { 2,3, 5, 6, 8, 9, 10 };
    int target = 5;
 
    int n = sizeof(array)/sizeof(array[0]);
 
    int low = 0, high = n - 1;
    int index = binarySearch(array, low, high, target);
 
    if (index != -1)
        printf("Element found at index %d", index);
    else
        printf("Element not found in the array");
 
    return 0;
}