#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
     
     cout<<a<<endl<<b<<endl;
     int sum;
        for(int i=1;i<=n;i++){
            sum=a+b;
            cout<<sum<<endl;

            a=b;
            b=sum;
        } 
}