#include<iostream>
using namespace std;
int main(){
    int t,x,y,n,r;
    cin>>t;
    while(t--){
        cin>>x>>y>>n>>r;
        if((r/y)>=n){
          cout<<0<<" "<<n<<endl;
        }
        else if(r<x){
            cout<<"-1"<<endl;
        }
        else{
            int a=(r-(y*n))/(x-y);
           if((r-(y*n))/(x-y)!=0);
           a+=1;
           cout<<a<<" "<<n-a<<endl;
        }
       
    }
}