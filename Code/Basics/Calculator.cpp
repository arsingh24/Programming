#include<iostream>
using namespace std;

int  main(){
    int choice,a,b;
    cout<<"Welcome to calculator World\n";
    cout<<"choose 1 for addition\n";
    cout<<"choose 2 for subtraction\n";
    cout<<"choose 3 for multiplication\n";
    cout<<"choose 4 for division\n";

    cin>>choice;
    cout<<"enter the digits\n";
    cin>>a>>b;

    switch(choice){
        case 1:
        a+=b;
        cout<<a;
        break;

        case 2:
        a-=b;
        cout<<a;
        break;

        case 3:
        a*=b;
        cout<<a;
        break;

        case 4:
        a/=b;
        cout<<a;
        break;

    }

return 0;
}