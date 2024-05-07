#include<iostream>
using namespace std;
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


int main(){
    int even[10]={2,6,9,11,44,6};
    int odd[10]={11,55,66,7,4};

    swapAlternate(even,6);
    swapAlternate(odd,5);

    printArray(even,6);
    printArray(odd,5);
}
