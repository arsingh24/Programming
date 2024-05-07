#include<iostream>
using namespace std;

bool isEven(int a){
   if(a&1){
    return 0;
   }
   return 1;
}
int main(){
int n;
cin>>n;
if (isEven(n)){
    cout<<"Number is even \n";
}
cout<<"Number is odd\n";
}
