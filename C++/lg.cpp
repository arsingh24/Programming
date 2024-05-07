#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;

    /*cout<<"a&b  "<<(a&b)<<endl;  //logic opertor
    cout<<"~a  "<<(~a)<<endl;
    cout<<"a|b  "<<(a|b)<<endl;
    cout<<"a^b  "<<(a^b)<<endl;*/

    /*cout<<(17>>1)<<"\n";
    cout<<(17>>2);    //left wise 
    cout<<(21<<1);*/ //right
  /*cout<<(a++)<<endl;
  cout<<(++a)<<endl;
  cout<<(--a)<<endl;
  cout<<(a--)<<endl;*/


     /*a=10;b=1;
     if(++a)
     cout<<b;
     else
     cout<<++b;*/


      /*int n1=0,n2=1,n,sum;
      cin>>n;
     for(int i=1; i<=n; i++){
         sum=n1+n2;
         cout<<sum<<endl;
         n1=n2;
         n2=sum;
         break;
     }*/

     int n;
     cin>>n;

     for(int i=2;i<n;i++){
         if(n%i==0){
             cout<<"not a prime";
         }
         else{

         cout<<"prime";
         }
     }
 

 return 0;
}