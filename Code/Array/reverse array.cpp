#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int arr[10]={1,4,6,88,0,4};
    int crr[10]={55,6,3,9,8};

    reverse(arr,6);
    reverse(crr,5);

    printArray(arr,6);
    printArray(crr,5);
}