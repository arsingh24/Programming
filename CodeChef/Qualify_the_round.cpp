#include<iostream>
 using namespace std;

 int main(){
   int t,p,a,b;
   cin>>t;
   while(t--){
    cin >>p>>a>>b;
    if(a*1+b*2>=p)
    {
        cout<<"Qualify\n";
    }
    else{
        cout<<"NotQualify\n";
    }
   }
     return 0;
 }