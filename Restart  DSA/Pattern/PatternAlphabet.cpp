#include<iostream>
using namespace std;

int main(){
   /* int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+row-1;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }*/

    /*int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+col-1;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    } */

    /*int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<ch;
            ch=ch+1;
            col=col+1;
            
        }
        cout<<endl;
        row=row+1;
    }*/

   /* int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n)
        {
            char ch ='A'+row+col-2;
            cout<<ch<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }*/
     int n;
    cin>>n;
    int row=1;
    while(row<=n){
        char ch='A'+row-1;
        int col=1;
        while(col<=n)
        {
            cout<<ch<<" ";
            col=col+1;
            ch=ch+1;
        }
        cout<<endl;
        row=row+1;
    }

    /*int n;
    cin>>n;
    int row =1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+row-1;
            cout<<ch<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }*/

    /*int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<ch;
            ch=ch+1;
            col=col+1;
        }
        row=row+1;
        cout<<endl;
    }*/

    /*int n;
    cin>>n;
    int row =1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+row+col-2;
            cout<<ch<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }*/

     /*int n;
    cin>>n;
    int row =1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+n+col-row-1;
            cout<<ch<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }*/
}