#include<bits/stdc++.h>
using namespace std;
int main(){

     int n;
     cin>>n;

     for(int i=2;i<n;i++){
         if(n%i==0){
             cout<<"not a prime\n";
             break;
         }
         else{

         cout<<"prime\n";
         break;
         }
     }
 return 0;
 }
 