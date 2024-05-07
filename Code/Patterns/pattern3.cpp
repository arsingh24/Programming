#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cin>>n;


    /*row=1;
    while(row<=n){
        //for space
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //for star
        col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }*/

    row=1;
    while(row<=n){
       col=1;
       while(col<=n-row+1){
        cout<<"*";
        col=col+1;
       }
       cout<<endl;
       row=row+1;
    }
}

