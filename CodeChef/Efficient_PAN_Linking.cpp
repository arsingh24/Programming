#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        char str[10001];
        cin>>str;
        
        int total = 0;
        for (int i = 0; i < strlen(str); i++) {
            total = (total * 10 + (str[i] - '0')) % 20;
        }
        cout<<total<<"\n";
    }
    return 0;
}