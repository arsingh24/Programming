#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        string s,t,m="";
        cin>>s>>t;
        for(int i=0;i<5;i++){
        if(s[i]==t[i]){
            m=m+"g";
            
        }
          else{
            m=m+"b";
          }
          }
          cout<<m<<endl;
    }
    return 0;
}