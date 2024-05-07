#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
 void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
 }
void print3(int n){
  for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
 }

void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
 }
void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<" *";
        }
        cout<<endl;
    }
 }
void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
 }

void print7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //for star
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        //for space
        for (int l=0;l<n-i-1;l++){
            cout<<" ";
        }
        cout<<endl;
    }
 }
void print8(int n){


    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //for star
        for(int k=0;k<2*n-(2*i+1);k++){
            cout<<"*";
        }
        //for space
        for (int l=0;l<i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
 }


void print10(int n){
     
    for(int i=1;i<2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
    
    
        cout<<endl;
    }
 }

void print11(int n){
     
    for(int i=0;i<n;i++){

     int start=1;
     if(i%2==0)start=1;
     else start=0;
    for(int j=0;j<=i;j++){
        cout<<start;
        start=1-start;
    }
    
        cout<<endl;
    }
    }
 void print12(int n){
    int space =2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=space;k++){
            cout<<" ";
        }
        for(int l=i;l>=1;l--){
            cout<<l;
        }
            cout<<endl;
            space-=2;
    }

 }
int main(){
    int n;
    cin>>n;
    print12(n);
}