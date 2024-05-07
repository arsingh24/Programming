#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int X,Y,S,P,N;
        cin>>X>>Y;
       S=X-Y;
       N=X+X*10/100;
       P=N-S;
       cout<<P<<endl;

    }
}