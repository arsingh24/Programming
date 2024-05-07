#include<iostream>
#include<queue>
using namespace std;

int main(){
    /*queue<string>q;
    q.push( "Abhishek" );
    q.push( "raj" );

    cout<<"size before pop "<<q.size()<<endl;

      cout<<"first element "<<q.front()<<endl;
      q.pop();

        cout<<"size before pop"<<q.size()<<endl;
        cout<<"first elements "<<q.front()<<endl;}*/
    
    priority_queue<int>maxi;
    priority_queue<int,vector<int>,greater<int>>mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(0);
    cout<<"Size "<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(1);
    mini.push(3);
    mini.push(4);
    mini.push(0);
    cout<<"Size "<<mini.size()<<endl;
    int m=mini.size();
    for(int i=0;i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    }
