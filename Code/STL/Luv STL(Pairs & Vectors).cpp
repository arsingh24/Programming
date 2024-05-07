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
    cout<<"size="<<v.size()<<endl;
  for(int i=0; i<v.size();++i){
  cout<<v[i]<<endl;}
  cout<<endl;
 }
 /*int main(){   
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
}*/

 //pairs of vectors
/*int main(){
    vector<pair<int,int> > v;
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printvec(v);
}*/

//vector of array
/*int main(){
    int N;
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++){
        int  n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);

        }
    }
    for(int i=0;i<N;i++){
        printvec(v[i]);
    }
}*/

//vector of vector
 int main(){
    int N;
    cin>>N;
    vector<vector<int> >v;
    for(int i=0;i<N;i++){
        int  n;
        cin>>n;
        vector<int>temp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);

        }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        printvec(v[i]);
    }
    
}