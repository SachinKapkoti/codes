#include <bits/stdc++.h> 
using namespace std; 
#define N 8 
  
// Person with 2 is celebrity 
bool MATRIX[N][N] = {{0, 1, 0, 0}, 
                     {0, 0, 0, 0}, 
                     {0, 1, 0, 0}, 
                     {0, 1, 1, 0} 
}; 

  
// Returns id of celebrity 
int findCelebrity(int n) 
{ 
    int i=0; int j=n-1;
    while(i<j)
    {
        if(MATRIX[i][j]==1)
        i++;
        else
        j--;
    }
    int celeb=i;
    for(int i=0;i<n;i++)
    {if(i!=celeb)
      if(MATRIX[i][celeb]==0 || MATRIX[celeb][i]==1)
      //col                       //row
      return -1;
      
        
    }
    return celeb;
} 
  
int main() 
{ 
    int n = 4; 
    int id = findCelebrity(n); 
    id == -1 ? cout << "No celebrity Found" : 
               cout << "Celebrity ID is " 
                    << id; 
    return 0; 
} 


/* Try more Inputs
case 1: 
static int matrix[][] = {{0 1 0}, 
                         {0 0 0}, 
                         {0 1 0}};
expected = 1

case2: 
static int matrix[][] = {{0 1},
                        {1 0}};
 expected = -1
 
Note: The two people at the party both
know each other. None of them is a celebrity
 
case 3: 
static int matrix[][] = { {0, 0, 1, 0},
                            {0, 0, 1, 0},
                         {0, 1, 0, 0},
                         {0, 0, 1, 0} };
expected = -1
*/
