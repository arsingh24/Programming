#include<iostream>
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
        int n ,a[10],count=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                count++;
                
            }
            
        }
        cout<<count;
     }
        
    }
