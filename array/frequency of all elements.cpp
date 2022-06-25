procedure

1. decrease all elemnets by 1, elements should be between 0 to n-1;
2.go to a[i]th index and add n to it;
----4 1 6 6 4 4 1
a[0]=4
go to 4th index ie 4 and add 7 ie n.
----4 1 6 6 11 4 1
3. for i+1(frequency of 1 )    we print a[i]/n;


#include<bits/stdc++.h>
using namespace std;
 
// Function to find counts of all elements present in
// arr[0..n-1]. The array elements must be range from
// 1 to n
void findfrequency(int arr[],int n)
{
     //Practise Yourself : Write your code Here
     for(int i=0;i<n;i++)
     arr[i]=arr[i]-1;
     
     for( int i=0;i<n;i++)
     arr[arr[i]%n]=arr[arr[i]%n]+n;
     
     for(int i=0;i<n;i++)
    cout<<i+1<<"frequency is- "<<arr[i]/n<<endl; 
}
 

int main()
{
    int arr[] = {2, 3, 3, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    findfrequency(arr,n);
    return 0;
}


/* Try more Inputs
case 1: 
actual = countfrequenciesEfficient([1, 2, 2, 1, 1, 2, 3, 2])
expected = [[1 3],[2 4],[3  1]]

case2: 
 actual = countfrequenciesEfficient([1, 2, 2])
 expected = [[1 1],[2 2]]
 
case3: 
actual = countfrequenciesEfficient([4, 4, 4, 4}])
expected = [[4 4]]
*/