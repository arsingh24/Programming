#include<iostream>
using namespace std;

/*int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int i=1;
    int sum=0;
    
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"sum of the n ="<<sum<<endl;
}*/

int main(){
    int n;
    cin>>n;
    int i=2,sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<"sum of even no."<<sum<<endl;
}