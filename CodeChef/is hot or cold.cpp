#include<iostream>
using namespace std;

int main(){
    int t,a,b,c,d,s,v;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;

        s = max(a, b);
        v = max(c, d);
     cout<<s+v<<endl;
}      
    
    
}