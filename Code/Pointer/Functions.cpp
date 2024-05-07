#include<iostream>
using namespace std;


void print(int *p){
    cout<<*p<<endl;
}
void update( int *p){
    *p=*p+1;
}
int getSum(int arr[],int n){
    cout<<"sizeof="<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
   /* int value=5;
    int *p=&value;
    cout<<"before"<<endl;
    print(p);
    cout<<"after\n";
    update(p);
    print(p);
    */
    int arr[6 ]={1,2,3,4,5,6};
    cout<<"Sum is "<<getSum(arr+3,2)<<endl;

   return 0; 
}