#include<bits/stdc++.h>
using namespace std;

//pairs : we use pairs to get the two different variables together
/*int main(){
    
    pair<int,string> a;
    a.first=24;
    cout<<a.first<<"\n";
    a.second="abhishek";
    cout<<a.second;
}*/

 //vectors: array whose size can be change according to its input
 void printvec(vector<int> v){
    cout<<v.size()<<endl;
  for(int i=0; i<v.size();++i){
  cout<<v[i];}
  cout<<endl;
 }
 int main(){   
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        printvec(v);
        v.push_back(x);
    }
        printvec(v);

}