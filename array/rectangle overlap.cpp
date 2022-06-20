#include<bits/stdc++.h> 
  
struct Point 
{ 
    int x, y; 
}; 
  
// Returns true if two rectangles (l1, r1) and (l2, r2) overlap 
bool doOverlap(Point l1, Point r1, Point l2, Point r2) 
{ 
   //Practise Yourself :  Write your code Here
   {
	int x1 = l1.x , y1 = l1.y, x2 = r1.x, y2 = r2.y;
	int x3 = l2.x, y3 =  l2.y, x4 = r2.x, y4 = r2.y;
	return !(x1 < x4 && x3 < x2 && y1 < y4 && y3 < y2);
}
    
} 
  
int main() 
{ 
    Point l1 = {0, 10}, r1 = {10, 0}; 
    Point l2 = {5, 5}, r2 = {15, 0}; 
    if (doOverlap(l1, r1, l2, r2)) 
        printf("Rectangles Overlap"); 
    else
        printf("Rectangles Don't Overlap"); 
    return 0; 
}