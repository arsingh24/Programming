#include<iostream>
using namespace std;

/*int PrintSum(int n,int m){
    int sum=n+m;
    cout<<"sum of numbers  "<<sum<<endl;
    return 0;
}
int main(){
    int n,m;
    cin>>n>>m;

    PrintSum(n,m);
}*/

/*int PrintProduct(int n,int m){
    return n*m;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<PrintProduct(n,m);
}*/

/*int PrintArea(int n){
    double pie=3.14;
    double area=pie*(n*n);
    double circumference=2*pie*n;
    cout<<"circumference of circle "<<circumference<<endl;
    cout<<"area of circle "<<area<<endl;
    return 0;
}
int main(){
    int n;
    cin>>n;
    PrintArea(n);
}*/

/*int Printmax(int n,int m,int o){
     if (n>m && n>o) cout <<n<<"  is maximun\n";
     else if (m>n && m>o) cout <<m<<" is maximun\n";
     else if (o>n && o>m) cout <<o<<"  is maximun\n";
  
    return 0;
}
int Printmin(int n,int m,int o){
     if (n<m && n<o) cout<<n<<" is minimun\n";
     else if (m<n && m<o) cout <<m<<" is minimun\n";
     else if (o<n && o<m) cout <<o<<" is minimun\n";
  
    return 0;
}
int main(){
    int n,m,o;
    cout<<"input for n,m,o\n";
    cin>>n>>m>>o;
    Printmax(n,m,o);
    Printmin(n,m,o);
}*/


/*int PrintEvenOdd(int n){
     if (n%2==0) cout <<n<<"  is even\n";
     else cout <<n<<"  is odd\n";
  
    return 0;
}

int main(){
    int n;
    cout<<"input for n\n";
    cin>>n;
    PrintEvenOdd(n);
}*/

/*void PrintVote(int age){
    if (age>=18)cout<<"He/She is elligible to vote\n";
    else cout<<"He/She is not elligible to vote\n";
}
int main(){
  int age;
  cout<<"enter age\n";
  cin>>age;
  PrintVote(age);
  
}*/

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n))
    cout<<"is Prime Number\n";

    else cout<<"Not a prime no. \n";
}

