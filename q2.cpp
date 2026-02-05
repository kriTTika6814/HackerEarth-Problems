//Determine if the entered word is similar to word zoo.
#include <iostream>
int main() 
{std::string s;
 std::cin>>s;

int countz= 0, counto= 0;
for(char ch:s) 
{if(ch=='z' || ch=='Z') 
 countz++;
        
 else if(ch=='o' || ch=='O') 
 counto++;

 else
 {std::cout<<"No"<<std::endl;
  return 0;}}

if(2*countz==counto) 
{std::cout<<"Yes"<<std::endl;} 

else 
{std::cout<<"No"<<std::endl;}
return 0;}
