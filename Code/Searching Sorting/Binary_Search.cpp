#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid = (start + end)/2;

    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        if (arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main(){
    int even[6] = {5,6,9,21,55,60};
    int odd[5]={5,9,16,21,23};

    int evenindex=BinarySearch(even,6,21);
    cout<<"index of 21= "<<evenindex<<endl;

    
    int oddindex=BinarySearch(odd,5,21);
    cout<<"index of 21= "<<oddindex<<endl;

      return 0;
}