#include<iostream>
using namespace std;

int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>=b){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}