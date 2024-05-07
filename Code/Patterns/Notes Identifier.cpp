#include<iostream>
using namespace std;
int main(){
    int a,c;
    cout<<"Enter the number\n";
    cin>>a;
    cout<<"enter the notes u want\n";
   int notes;
    cin>>notes;
    switch (notes)
    {
    case 1000: c=a/1000;
          a=a%1000;
          cout<<c<<endl;
        break;
    case 500: 
          c=a/500;
          a=a%500;
          cout<<c<<endl;
        break;
    case 100: 
          c=a/100;
          a=a%100;
          cout<<c<<endl;
        break;
    case 10: 
          c=a/10;
          a=a%10;
          cout<<c<<endl;
        break;
    
    default:
        break;
    }
 return 0;
}