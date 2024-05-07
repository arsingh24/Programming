#include <iostream>
using namespace std;

int main() {
	int X,Y,H;
	cin>>X>>Y>>H;
    H-=1;
    Y*=H;
    X+=Y;
	cout<<X;
	return 0;
}
