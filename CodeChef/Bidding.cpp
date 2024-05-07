#include<iostream>
 using namespace std;

 int main(){
   int t,a;
   cin>>t;
   while(t--){
    int A,B,C;
    cin>>A>>B>>C;

    if(A>=B&&A>=C){
        cout<<"Alice\n";
    }
     else if (B>=C&&B>=A){
        cout<<"Bob\n";
    }
     else {
        cout<<"Charlie\n";
        }

      
   }
     return 0;
 }