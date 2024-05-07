#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
           /* cout<<"not prime\n";*/
            isPrime=0;
            break;
        }
    }
    if (isPrime==1)
    {
        cout<<"prime number";
    }
    else cout<<" not prime";
    
       
    
}