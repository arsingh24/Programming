#include<iostream>
using namespace std;

int main(){

   string a,b,c;
   cin>>a>>b;
   int len = a.size();
   int len2 = b.size();
   c=a+b;

string s = a;
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'

s[0] = b[0];  

string r = b;
char   w0 = r[0];   // c0 = 'a'
char   w1 = r[1];   // c1 = 'b'
char   w2 = r[2];   // c2 = 'c'

r[0] = a[0]; 

cout<<len<<" "<<len2<<endl<<c<<endl<<s<<" "<<r;

}