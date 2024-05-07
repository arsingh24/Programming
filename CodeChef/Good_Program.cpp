#include<iostream>
 using namespace std;

 int main(){
   int t ;
    cin >> t;
    while(t--) {
       float n;cin>>n;
    float ans = n/4;
    if(ans==(int)ans){
        cout<<"GOOD"<<endl;
    }
    else{
        cout<<"NOT GOOD"<<endl;
    }
      
    }

     return 0;
 }