#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int w;
     cin>>w;
        if(w>2000){
            cout<<"YES\n";
        }
        else if(w==2000){
            cout<<"YES\n";
        }
        else if (w<2000){
            cout<<"NO\n";
        }
    }
}