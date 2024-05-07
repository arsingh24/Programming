// The code below is incorrect. Debug the code to solve this problem

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
   {
    int X,Y;
    //Accept 2 integers inputs.
    cin>>X>>Y;       
    
    if (X == Y)         
      {
        cout<<"YES"<<endl;
       }
    else
      {
        cout<<"NO"<<endl;
       }
   }
 return 0;
}