#include<iostream>
using namespace std;
int main(){
    int n;
   cout<<n<<endl;
   cin>>n;
   int i=1;
   while(i<=n){
         int j=1;
         while(j<=n){
           cout<<i;
           j=j+1;
    }
    cout<<endl;
    i=i+1;
   }

    //1. 123 upto n ,
   /* row=1;
    while(row<=n){
          col=1;
          while(col<=n){
            cout<<col;
            col=col+1;
          }
          cout<<endl;
          row=row+1;}*/


//2.reverse  of number i.e. 54321 upto n
         /* row=1;
          whrowle(row<=n){
            col=1;
            while(col<=n){
                cout<<n-col+1;
                col=col+1;
            }
            cout<<endl;
            row=row+1;
          }*/

    //3.print increasing number i.e 1 2 3 4 5 upto n
        /*int count=1;
        row=1;
        while(row<=n){
            col=1;
            while(col<=n){
                
                cout<<count<<" ";
                count=count+1;
                col=col+1;
            }
            cout<<endl;
            row=row+1;
        }*/

  // print right angle triangle 
      /*  row=1;
        while(row<=n){
            col=1;
            while(col<=row){
                cout<<"*";
                col=col+1;

            }
            cout<<"\n";
            row=row+1;
        }*/


    //1
    /*22
      333
     row=1;
        while(row<=n){
            col=1;
            while(col<=i){
                cout<<row;
                col=col+1;

            }
            cout<<"\n";
            row=row+1;
        }*/


      //1 
      /*2 3
      4 5 6 
      int count =1;
         row=1;
        while(row<=n){
            col=1;
            while(col<=row){
                cout<<count<<" ";
                count=count+1;
                col=col+1;
            }
            cout<<"\n";
            row=row+1;
        }*/


        //1
          /*23
          345
          456
        row=1;
        while(row<=n){
            col=1;
            int value =row;
            while(col<=row){
                
                cout<<value;
                value=value+1;
                col=col+1;

            }
            cout<<"\n";
            row=row+1;
        }*/

        //1
        /*12
        123
   
       row=1;
        while(row<=n){
            col=1;
            while(col<=row){
                 cout<<col;
                col=col+1;
            }
            cout<<"\n";
            row=row+1;
        }*/
          
          //1
           /*21
           321
           4321
           row=1;
        while(row<=n){
            col=1;
            while(col<=row){
                cout<<row-col+1;
                col=col+1;
            }
            cout<<"\n";
            row=row+1;
        }*/
}