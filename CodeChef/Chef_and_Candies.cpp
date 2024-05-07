#include<iostream>
using namespace std;

int main(){
    int t;
cin>>t;
while(t--){
    int A,B;
    cin>>A>>B;
    int sub=A-B;
    int c=sub/4;
    if (B>A){
        cout<<"0\n"; 
       }
       else {
        if (sub%4==0){
            cout<<c<<endl;
        }
        else {
            cout<<c+1<<endl;
        }
       }
}
return 0;
}