#include<iostream>
#include<array>
using namespace std;

int main(){
array<int,4> a={5,9,3,7};
int size=a.size();
for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
}
cout<<"elements at 2nd index " <<a.at(2)<<endl;
cout<<"empty or not " <<a.empty()<<endl;
cout<<"elements at first  " <<a.front()<<endl;
cout<<"elements at end " <<a.back()<<endl;
}