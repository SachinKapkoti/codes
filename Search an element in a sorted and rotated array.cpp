#include <stdio.h>

// Function to find an element x in a circularly sorted array
int arraySearch(int array1[], int n, int x)
{
	//write your code herewihle
	int l=0; int h=n-1;
	
	while(l<=h)
	{
	    int m=(l+h)/2;
	    if(array1[m]==x)
	     return m;
	    
	  if(array1[l]<=array1[m])
	   {
	    if(x>=array1[l] && x<=array1[m])
	    h=m-1;
	    else
	    l=m+1;
	   
   	   }
	   else
	   {
	    if(x>=array1[m+1]&& x<=array1[h])
	    l=m+1;
	    else
	    h=m-1;
	  }
	  
	}

	return -1;
}

int main(void)
{
	int array1[] ={3, 4, 5, 6, 7, 8, 9, 10, 1, 2};
	int target = 2;

	int n = sizeof(array1)/sizeof(array1[0]);
	int index = arraySearch(array1, n, target);
    
	if (index != -1)
		printf("Element found at index %d", index);
	else
		printf("Element not found in the array");

	return 0;
}
/* Try more Inputs
case 1: 
actual = arraySearch([3, 4, 5, 6, 7, 8, 9, 10, 1, 2],9,1)
expected = 8

case2: 
 actual = arraySearch([5, 6, 7, 8, 9, 10, 1, 2, 3],8,3)
 expected = 8
 
case3: 
actual = arraySearch([5, 6, 7, 8, 9, 10, 1, 2, 3],8,28)
expected = -1

case4:
actual = arraySearch([30, 40, 50, 10, 20],4,10)
expected = 3

*/