#include <iostream> 
#include <cstring> 
#include <algorithm> 
using namespace std; 
  

void swap(char *a, char *b) 
{ 
    char temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
// Given a number as a char array array1[], this function finds the 
// next greater number.  It modifies the same array to store the result 
void findNext(char array1[], int n) 
{ 
     //Practise Yourself : Write your code Here
     int i,j;
     for(i=n-1;i>0;i--)
     if(array1[i-1]<array1[i])
     break;
     
     int min=i;                     //2 1 8 7 6 5 
                                     // 2 1(ELE,i-1) 8(MIN,i)  7(j,i+1) 6  5
     int ele=array1[i-1];
     
     for( j=i+1;j<n;j++)
     if(array1[j]>ele && array1[j]<array1[min])
       min=j;
     
     swap(&array1[min], &array1[i-1]); 
  
    //Sort the digits after (i-1) in ascending order 
    sort(array1 + i, array1 + n); 
  
    cout << "Next number with same set of digits is " << array1; 
  
    return; 
} 
  
int main() 
{ 
    char digits[] = "218765"; 
    int n = strlen(digits); 
    findNext(digits, n); 
    return 0; 
} 


/* Try more Inputs
case 1: 
actual = findNextNumber([1,2,3,4],4)
expected = 1243

case2: 
 actual = findNextNumber([5,3,4,9,7,6],6)
 expected = 536479
 
case3: 
actual = findNextNumber([6,9,3,8,6,5,2],7)
expected = 6952368
*/