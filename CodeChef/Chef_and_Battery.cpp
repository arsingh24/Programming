#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 0;
        for(int i=0;n!=50;i++){
             if(n>50){
                 n = n-3;
                 ans++;
             }
             else{
             n=n+2;
                 ans++;
             }
             
             
        }
        cout<<ans<<endl;
    }
 return 0;
}