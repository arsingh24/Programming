#include<iostream>
using namespace std;

int fibonnaci(){
    int a=0;
    int b=1;
    int n;
    int nextTerm;
    for(int i=1;i<=n;i++){

        nextTerm=a+b;
        a=b;
        b=nextTerm;
    }
    return nextTerm ;
}

 int main(){t
    int n;
    cin>>n;

    cout<<fibonnaci(n)<<" ";
 }
