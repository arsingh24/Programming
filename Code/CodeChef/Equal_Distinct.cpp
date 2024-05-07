#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a[100],i;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        if(n&2!=0){
            cout<<"NO\n";
            
        }
        else{
            cout<<"YES\n";
        }
    }
}