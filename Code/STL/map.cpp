#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string>m;
  m[1]="abhishek";
  m[4]="singh";
  m[2]="raj";

  m.insert({6,"patna"});
   
   for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
   }cout<<endl;

   m.erase(4);
   cout<<"after erase\n";
   for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
   }
   
}