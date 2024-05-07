#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int> v;
    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3 );
    /*cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    cout<<"elements at 2nd index " <<v.at(2)<<endl;
    cout<<"empty or not " <<v.empty()<<endl;
    cout<<"elements at first  " <<v.front()<<endl;
    cout<<"elements at end " <<v.back()<<endl;*/

    cout<<"before pop\n";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

     cout<<"after pop\n";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear "<<v.size()<<endl;
    v.clear();
    cout<<"after clear "<<v.size()<<endl;
}