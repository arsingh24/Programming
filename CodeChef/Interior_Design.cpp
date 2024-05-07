#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        a+=b;
        c+=d;
        if (a<c)
        {
            cout<<a<<endl;
        }
        else {
            cout<<c<<endl;
        }
    }
    return 0;
}