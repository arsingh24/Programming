#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(4);

    cout<<"elements at 2nd index " <<d.at(1)<<endl;
    cout<<"empty or not " <<d.empty()<<endl;
    cout<<"elements at first  " <<d.front()<<endl;
    cout<<"elements at end " <<d.back()<<endl;

    cout<<"before pop\n";
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();

     cout<<"after pop\n";
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after clear "<<d.size()<<endl;

}