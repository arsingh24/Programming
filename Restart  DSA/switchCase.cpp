#include<iostream>
using namespace std;
//mini calculator
int main(){
   /* int a,b;
    cout<<"enter the value of a &b\n";
    cin>>a>>b;

    char op;
    cout<<"choose the operator\n";
    cin>>op;

    switch(op){
        case '+': cout << (a+b) <<endl;
            break;
        case '-': cout << (a-b) <<endl;
            break;
        case '*': cout << (a*b) <<endl;
            break;
        case '/': cout << (a/b) <<endl;
            break;
         case '%': cout << (a%b) <<endl;
            break;
    }*/

    int a;
    cout<<"enter the value\n";
    cin>>a;

    int amount;
    cout<<"choose the note\n";
    cin>>amount;
    int count;
    
    switch(amount){
        case 100:
        count=amount/100;
              //amount=amount%100;
              cout<<"No of 100 Rupee notes required are="<<count<<endl;
                 
            break;
        case 50: 
        count=amount/50;
              amount=amount%50;
              cout<<"No of 50 Rupee notes required are="<<count<<endl;
            break;
            break;
        case 20: count=amount/20;
              amount=amount%20;
              cout<<"No of 20 Rupee notes required are="<<count<<endl;
            break;
        case 10: count=amount/10;
              amount=amount%10;
              cout<<"No of 10 Rupee notes required are="<<count<<endl;
            break;
    }
    }