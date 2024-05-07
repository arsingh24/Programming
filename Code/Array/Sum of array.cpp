#include<iostream>
using namespace std;

int main(){
    int cod[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>cod[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+cod[i]; 
    }
    cout<<"sum="<<sum<<" ";
}