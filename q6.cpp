//Roy wants to change his profile picture on Facebook. Now Facebook has some restriction over the dimension of picture that we can upload.
#include<iostream>
int main() 
{int L,N,W,H;
 std::cin>>L>>N;
 for (int i =0; i<N; i++) 
 {std::cin>>W>>H;
 if(W<L || H<L) 
 {std::cout<<"UPLOAD ANOTHER"<<std::endl;} 
 
 else if(W==H) 
 {std::cout<<"ACCEPTED"<<std::endl;} 
        
 else 
 {std::cout<<"CROP IT"<<std::endl;}}

 return 0;}
