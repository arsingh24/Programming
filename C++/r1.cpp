#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        string s,t,m;
        cin>>s>>t;
        int i=0;
        if(s[i]==t[i]){
            cout<<"g";
            i++;
        }
          else{
              cout<<"b";
          }
    }
    return 0;
}