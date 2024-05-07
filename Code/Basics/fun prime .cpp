#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=0;i<=n;i++)
     {    if(n%2==0){
        return 0;
      }
      }

    return 1;
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime\n";
    }
    else{
    cout<<"not prime";}
}