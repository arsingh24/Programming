#include<iostream>

using namespace std;
 
 
int main(){

string phrase = "Abhishek is babuaan";

cout<<phrase<<"\n";
cout << phrase[2]<<"\n";
cout << phrase.length()<<"\n";
cout <<phrase.find("aan")<<"\n";
cout << phrase.substr(4,6)<<"\n";

phrase[12]='B';
cout <<phrase;

return 0;
}
