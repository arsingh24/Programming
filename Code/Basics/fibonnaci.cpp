#include<iostream>
using namespace std;
int main(){
    int a=0,b=1;
    
    int n;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
      int nextTerm=a+b;
      cout<<nextTerm<<" ";

      a=b;
      b=nextTerm;
    }

}