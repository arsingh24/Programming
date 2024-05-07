#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int P,B;
     cin>>P>>B;
     if (P==B)
     cout<<P<<endl;
     if(P>B){
        cout<<B<<endl;
     }
     else if (P<B){
        cout<<P<<endl;
     }
        
    }
}