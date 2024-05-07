#include<iostream>
using namespace std;

int  main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,X,Y;
        cin>>A>>B>>X>>Y;
      int temp= A-B;
      if(temp==0)
      cout<<"YES\n"; 
      else if(temp<0){
        if(abs(temp)<=X)
         cout << "YES"<< endl;
        else
        cout <<"NO"<< endl;
        }
     else {
        if(abs(temp)<=Y)
        cout << "YES"<< endl;
        else
        cout <<"NO"<< endl;
        }
}
}