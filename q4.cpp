//You have been given a String S consisting of uppercase and lowercase English alphabets. You need to change the case of each alphabet in this String. 
#include<iostream>
int main() 
{std::string S;
 std::cin>>S;
 
for(char &ch:S) 
{if(isupper(ch))
 ch=tolower(ch);

 else if(islower(ch))
 ch=toupper(ch);}

 std::cout<<S;
 return 0;}
