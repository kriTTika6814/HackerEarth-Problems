//You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" 
#include <iostream>
int main() 
{std::string s;  
 std::cin>>s;
 int len=s.length();
 char arr[100];           
 for(int i=0; i<len;i++) 
 {arr[i]=s[i];}
    
int flag=1;
for(int j=0; j<len/2; j++)  
 {if(arr[j] != arr[len-1-j]) 
  {flag=0;  
   break;}}
    
if(flag==0)  
std::cout<<"NO"<<std::endl;

else 
std::cout<<"YES"<<std::endl;  
return 0;}
