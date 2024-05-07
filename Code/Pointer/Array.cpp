#include<bits/stdc++.h>
using namespace std;

int main(){
    /*int arr[10];
    cout<<"address of first memory block is "<<arr<<endl;
    cout<<"address of first memory block is "<<&arr<<endl;
    cout<<"address of first memory block is "<<*arr<<endl;*/

/*
int arr[10]={3,5,7};
cout<<arr<<endl;
cout<<*arr<<endl<<&arr<<" "<<&arr[0]<<" "<<arr[0]<<"\n"<<*(arr+1);
cout<<"4th "<<*arr<<endl;
cout<<"5th "<<*arr+1<<endl;
cout<<"6th "<<*(arr+1)<<endl;
cout<<"7th "<<*(arr)+1<<endl;
cout<<"4th "<<arr[2]<<endl;
*/


//character Array

int arr[5]={1,2,3,4,5};
char ch[6]="abcde";


cout<<arr<<endl;
cout<<ch<<endl;

char *c = &ch[0];
cout<<c<<endl;

char temp='z';
char *p=&temp;
cout<<p<<endl;




return 0;
}