#include<iostream>
using namespace std;
int main(){
    int t,n,k,x,y,c;
    cin>>t;
    while(t--){
        cin>>n>>k>>x>>y;
       if (x>y){
        cout<<k*x+(n-k)*y<<endl;
       }
       else{
        cout<<x*n<<endl;
       }

        
    }
    return 0;
}