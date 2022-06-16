#include<bits/stdc++.h> 
using namespace std; 
  
void swap(int *a, int *b); 
  
void sort012(int a[], int arr_size) 
{ 
     //Practise Yourself : Write your code Here
     
     int l=0; int travel=0; int h=arr_size-1;
    while( travel<=h)
    {
        if(a[travel]==0)
        {
            swap(a[l],a[travel]);
            l++;travel++;
        }
        else if(a[travel]==2)
         {   swap(a[h],a[travel]);
            h--;                //mid++ not done because replacement would also 
         }         
                                  //be needed to be checked
        else
        { travel++;
         }
        
    }
                    
} 
  
void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void segregateArray(int array1[], int arr_size) 
{ 
    int i; 
    for (i = 0; i < arr_size; i++) 
        cout << array1[i] << " "; 
 
} 

int main() 
{ 
    int array1[] = {2,2,0,0,1,1}; 
    int arr_size = sizeof(array1)/sizeof(array1[0]); 
    int i; 
  
    sort012(array1, arr_size); 
  
    cout << "segregated array "; 
    segregateArray(array1, arr_size);  
    return 0; 
} 


/* Try more Inputs
case 1: 
actual = Sort012([0, 1, 2, 0, 1, 2],5)
expected = [0, 0, 1, 1, 2, 2]

case2: 
 actual = Sort012([0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1],11)
 expected = [0,0,0,0,0,1,1,1,1,1,2,2]
 
case3: 
actual = Sort012([2,0,1}],3)
expected = [0,1,2]
*/