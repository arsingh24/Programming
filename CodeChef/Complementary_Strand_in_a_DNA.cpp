#include<iostream>
 using namespace std;

 int main(){
   int t,a;
   cin>>t;
   while(t--){
    cin >>a;
    while(a--){
    char S;
    char A=A,T=T,G=G,C=C;

    if(S==A){
        cout<<"T";
    }
     else if (S==T){
        cout<<"A";
    }
     else if (S==G){
        cout<<"C";}

     else if (S==C){
        cout<<"G";}

    }   
   }
     return 0;
 }