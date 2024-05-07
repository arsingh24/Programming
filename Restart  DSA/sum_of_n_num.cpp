#include<iostream>
using namespace std;

//product of n number
/*int main(){
    int n;
    cin>>n;
    int sum=1;
    int i=1;
    while(i<=n){
        sum=sum*i;
        i=i+1;
    cout<<"product of sum  "<<sum<<endl;
    }
    cout<<" final product of sum  "<<sum<<endl;
}*/

//sum of n number
int main(){
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<" sum of n "<<sum<<endl;
}