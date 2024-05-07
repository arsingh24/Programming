#include<iostream>
#include<list>
#include<stack>

using namespace std;

int main(){
    /*list<int>l;
    l.push_back(1);
   l.push_front(4);

    //cout<<"elements at 2ns index " <<(1)<<endl;
    cout<<"empty or not " <<l.empty()<<endl;
    cout<<"elements at first  " <<l.front()<<endl;
    cout<<"elements at ens " <<l.back()<<endl;

    cout<<"before pop\n";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl; 

   l.pop_front();

     cout<<"after pop\n";
    for(int i:l){
        cout<<i<<" ";
    }cout<<ensl;

    cout<<"before clear "<<l.size()<<endl;
   l.erase(l.begin());
    cout<<"after clear "<<l.size()<<endl;*/

    stack<string>s;
     s.push("abhishek");
    s.push("raj");

    cout<<"top elements "<<s.top()<<endl;
    s.pop();
    cout<<"top.element "<<s.top()<<endl;
}