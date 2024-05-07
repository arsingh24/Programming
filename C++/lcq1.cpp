#include<bits/stdc++.h>
using namespace std;
/*int main(){  //we have to find out the sum and product of the number and then we have to subtract them to get our answer.
    int (n);
    cin>>n;
     int sum=0;
     int prod=1;

    while(n!=0){
        int digit=n%10;
        prod=prod*digit;
        sum=sum+digit;

        n=n/10;
    }
    int sub;
    sub=prod-sum;
    cout<<sub;*/

    int main(){

        int (n);
        cin>>n;
        int count=0;
        while(n!=0){

            if (n&1){
                count++;
            }
            n=n>>1;
        }
        cout<<count<<endl;

}