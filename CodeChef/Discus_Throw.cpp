#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        cout<<a<<endl;
    }
    else if(b>c){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
}
return 0;
}