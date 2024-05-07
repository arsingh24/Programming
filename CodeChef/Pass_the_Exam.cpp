#include<iostream>
using namespace std;

int main(){
    int t;
cin>>t;

while(t--){
    int A,B,C;
    cin>>A>>B>>C;
int sum=A+B+C;
    if (sum>=100&&A>=10&&B>=10&&C>=10){
    
            cout<<"PASS\n";

        }
        else {
            cout<<"FAIL\n";
        }
    

}
return 0;
}