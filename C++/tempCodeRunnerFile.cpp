#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while (n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
      int rem=0,nans=0;
     while (ans!=0){
          rem=ans%10;
         nans=nans*10+rem;
         nans/=10;

   }
   cout<<nans<<endl;
}