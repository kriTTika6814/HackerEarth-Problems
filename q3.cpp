//You have been given a positive integer N. You need to find and print the Factorial of this number. The Factorial of a positive integer N refers to the product of all number in the range from 1 to N. 
#include <iostream>
int main() 
{int N, factorial=1;
 std::cin>>N;

for(int i=1; i<=N; i++)
{factorial= factorial*i;}
        
{std::cout<<factorial<<std::endl;}

return 0;}
