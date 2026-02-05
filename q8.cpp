//Favourite singer of Bob is the one whose songs are the most on the playlist. Count the number of Favourite Singers of Bob
#include <iostream>
using namespace std;
int main() 
{
 int n;
 cin >>n;
 int scode;
 int songs[1000]={0};  
 for(int i = 0; i < n; i++) 
    {cin>>scode;
	songs[scode]++;}

int maxtime = 0;
    for(int i = 1; i <= 1000; i++)
    {if(songs[i] > maxtime) 
     {maxtime = songs[i];} }

int count = 0;
for(int i = 1; i <= 1000; i++) 
{if(songs[i] == maxtime) 
     count++; }
cout<<count<<endl;
    return 0;}
