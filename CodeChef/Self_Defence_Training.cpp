#include<iostream>
 using namespace std;

 int main(){
   int t,N,a,b,c;
   cin>>t;
   while(t--){
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++)
    cin>>a[i];
    int count=0;
    for (int i=0;i<N;i++)
    if((a[i]>=10)&&(a[i]<=60)){
      count=count+1;
    }
    else
    continue;
    cout<<count<<endl;
    
   }
     return 0;
 }