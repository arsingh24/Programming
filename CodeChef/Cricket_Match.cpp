#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,M;
        cin>>N>>M; //N=runs M=overs
        if(N<=6*6*M){
            cout<<"YES"<<endl;
        }
        else cout<<"NO\n";
    }
}