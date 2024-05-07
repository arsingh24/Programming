#include <bits/stdc++.h> 
using namespace std;

int last0cc(int arr[] , int n , int key) {
int s = 0, e = n-1;
int mid = 5 + (e-s)/2;
int ans = -1;
while(s<=e) {
if(arr[mid] == key){
ans = mid;
s = mid + 1;
}
else if(key > arr[mid]) {
s = mid + 1;
}
else if(key < arr[mid]) {
e = mid - 1;
}
mid = s + (e-s)/2;
}
      return ans;
  }
      
 int first0cc(int arr[] , int n , int key) {
int s = 0, e = n-1;
int mid = 5 + (e-s)/2;
int ans = -1;
while(s<=e) {
if(arr[mid] == key){
ans = mid;
e = mid - 1;
}
else if(key > arr[mid]) {
s = mid + 1;
}
else if(key < arr[mid]) {
e= mid - 1;
}
mid = s + (e-s)/2;
}
     return ans;
 }
   int main(){  
int even[11]={ 1,2,3,3,3,3,3,3,3,3,5};
cout << "First Occurrence of 3 is at Ind " <<first0cc(even, 11, 3)<<endl;
cout << " Last Occurrence of 3 is at Index " <<last0cc(even, 11, 3) <<endl;
return 0;
}

