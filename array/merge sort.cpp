#include<iostream>
using namespace std;
void swapping(int &a, int &b) {     //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void merge(int *array, int l, int m, int r) {
   //Practise Yourself : Write your code Here
   int i,j,k,el,er;
   el=m-l+1;        //1234 mid =2, for ,for loop we need i<m+1
   er=r-m;
   
   //left and right subarray
   int larr[el];
   int rarr[er];
   

   for( i=0;i<el;i++)
   
       larr[i]=array[l+i];
  

   for(j=0;j<er;j++)
   
       rarr[j]=array[m+1+j];   ///4,8,3,12 --we have to put 3 so (m+1) m is 2
   
   i=0;j=0;k=l;
   //combine
   while(i<el && j<er)
   {
       if(larr[i]<=rarr[j])
      { array[k]=larr[i];
       i++;
      }
       else
       {array[k]=rarr[j];
       j++;
   }
   k++;
   }
   
   //left out elements
   //extra element left larr=4, 8  rarr=3,12  12 is left here
   while(i<el)
   {
       array[k]=larr[i];
       i++;k++;
       
   }
   
    while(j<er)
        {
       array[k]=rarr[j];
       j++;k++;
   }
   }
   
   
void mergeSort(int *array, int l, int r) {
    int m;
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(array, l,m);
        mergeSort(array, m+1,r);
        merge(array, l,m,r);
    }
}
int main() {
   int n;
   int arr[] ={8,4,3,12,25,6,13,10};
   mergeSort(arr, 0, 7);     //(n-1) for last index
   cout << "Array after Sorting: ";
   display(arr, 8);
}
