#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++){
        if (n%i==0){
            cout<<"not a prime no,\n";
            isprime =0;
            break;
        }
    }

    if(isprime==0){
        cout<<"not a prime\n";
    }
    else {
        cout<<"prime\n";
    }

    }