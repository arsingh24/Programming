#include<iostream>
using namespace std;

int getPivot(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid = start + (end - start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
         mid = start + (end - start)/2;
    }
    return start;
    }

    int main(){
        int even[6]={5,7,9,6,3,1};
        cout<<"getting Pivot "<< getPivot(even,6)<<endl;
        return 0;
    }