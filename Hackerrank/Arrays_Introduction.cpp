#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverse (int arr[],int t){
    int start=0;
    int end=t-1;
    while(start<=end){
        swap(arr[start],arr[end]);
            start++;
            end--;
        
    }
}
void printArray(int arr[],int t){
    for(int i=0;i<t;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arr[100];
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
   reverse(arr,t);
   printArray(arr,t);
    
    return 0;
}
