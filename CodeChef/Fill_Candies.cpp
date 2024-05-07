#include<iostream>
using namespace std;
int main(){
    int t,n,k,m,b;
    cin>>t;
    while(t--){
        cin>>n>>k>>m;
        b=k*m;
        int count=1;
        while(n>b){
            count++;
            b=b+k*m;

        }
         cout<<count<<endl;
    }
    return 0;
}