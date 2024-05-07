#include<iostream>
using namespace std;

bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[100];
    int n,key;
    cin>>n;
    cout<<"enter the key\n";
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int found=search(arr,n,key);

    if (found){
        cout<<"key is present";
    }
    else cout<<"key is absent";
}