#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,p,q;
        int sum=0;
        cin>>x>>p>>q;
        sum=x*(p-q);
        cout<<sum<<endl;
    }
}