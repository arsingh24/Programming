#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

    int n,count=0;
	    string s;
	    cin>>n>>s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i' && s[i]!='o' && s[i]!='u')
	           {
	               count++;
	               if(count>=4)
	               {
	                  break;
	               }
	           }
	        else{
	           count=0;}
	    }
	    if(count<4){
	    cout<<"yes"<<endl;}
	    else
	    {
	    cout<<"no"<<endl;}
	}
	return 0;
}