#include<iostream>
using namespace std;

int setBit(int n){
    int count=0;
    while(n!=0){
     if(n&1==1){
       count=count++;
    }
     n=n>>1;
    }
    
   return count;
}

int main(){
    int a,b;
    cin>>a>>b;

    int ans=setBit(a)+setBit(b); 
    cout<<ans;
    return 0;
 }
