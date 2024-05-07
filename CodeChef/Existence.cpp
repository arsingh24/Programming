#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
    ll x,y;
    cin>>x>>y;
    ll a = x*x*x*x + 4*y*y;
    ll b = 4*x*x*y;
     if(a==b){
         cout << "YES\n";
     }
     else cout << "NO\n";
 }
 return 0;
}