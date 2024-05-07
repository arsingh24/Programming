#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v;

    v.push_back(1);
    v.push_back(7);
    v.push_back(3 );
    v.push_back(5);
    v.push_back(6);
    v.push_back(8 );

    cout<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=2,b=9;

    cout<<"max "<<max(a,b)<<endl;
    cout<<"min "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a="<<a<<endl;

    
}