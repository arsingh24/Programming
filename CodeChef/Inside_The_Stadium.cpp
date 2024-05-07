#include <iostream>
using namespace std;

int main() {

 int t;
 cin>>t;
 while(t--){
     float n,s,c=0;
     cin>>n;
     float a=0,k;
     for(int i=1;i<=n;i++){
         float s;
        cin>>k;
        c=c+k;
         s=(c/i)*100;
        
         if(s==100){
             a=a+1;
         }
         
     }
    cout<<a<<"\n";
 }
 return 0;
}