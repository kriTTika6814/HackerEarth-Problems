//You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k. You do not need to print these numbers, you just have to find their count.
#include <iostream>
int main() 
{int I, r, k, count=0;
 std::cin>>I>>r>>k;
 for(int i=I; i<=r; i++)
 {if(i%k==0)
  count=count+1;}

 std::cout<<count;
 return 0;}
 
