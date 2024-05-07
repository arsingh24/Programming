#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main(){
    
    int arr[100]={1,3,5,8,44,55,6,61};

    cout<<"enter the key element\n";
    int key;
    cin>>key;
    
    bool found=search(arr,10,key);

    if(found){
        cout<<"key found\n";
    }
    else{
        cout<<"key not found\n";
    }

}