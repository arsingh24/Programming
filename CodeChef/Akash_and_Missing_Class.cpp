#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int n;
        cin>>n;
        if(n<0){
            cout<<"0";
        }
        else{
            int hd=(n)/6;
            cout<<hd<<endl;
        }
    }
    return 0;
}