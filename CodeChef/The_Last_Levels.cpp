#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int k=a/3;
        if (a%3==0){
        cout<<(a*b)+((k-1)*c)<<endl;}
        else{
        cout<<(a*b)+((k)*c)<<endl;
         }
    }
    return 0;
}