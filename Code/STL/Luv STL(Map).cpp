#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
 cout<<"size="<< m.size()<<endl;
 for(auto &pr :m){
    cout<<pr.first<<" "<<pr.second<<endl;
 }

}
int main(){
    map<int ,string>m;
    m[1]="abhishek";
    m[3]="raj";
    m[4]="singh";
    m[5]="cde";
    m[1]="babuaan";
    m.insert({7,"rajput"});
    auto it= m.find(5);
    m.erase(it);
    /*if(it==m.end()){
        cout<<"NO value";
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }*/
    print(m);   
}