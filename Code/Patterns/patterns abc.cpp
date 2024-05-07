#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cin>>n;

          //aaa
          /*bbb
          ccc
          row=1;
        while(row<=n){
            col=1;
            while(col<=n){
                char ch='a'+ row-1;
                cout<<ch;
                col=col+1;
            }
            cout<<"\n";
            row=row+1;
        }*/

        //abc
        /*abc 
          abc  row=1;
        while(row<=n){
            col=1;
            while(col<=n){
                char ch='a'+col-1;
                cout<<ch;
                col=col+1;
            }
            cout<<"\n";
            row=row+1;
        }*/

        //abc
        /*def 
          ghi

          row=1;
           char start='a';
        while(row<=n){
            col=1;
           while(col<=n){
                cout<<start;
                start=start+1;
                col=col+1;
            }
            cout<<"\n";
            row=row+1;
        }*/


        //abc
       /* bcd 
          cde

        row=1;
        while(row<=n){
            col=1;
           while(col<=n){
             char ch='a'+row+col-2;
                cout<<ch;
                col=col+1;
            }
            cout<<"\n";
            row=row+1;
        }*/
             //a
            /* bb
               ccc
            row=1;

            while(row<=n){
            col=1;
                while(col<=row){
                    char ch='a'+row-1;
                cout<<ch;
                col=col+1;
            }
            cout<<"\n";
            row=row+1;
        }*/


     //a
    /* bc
       cde
        defg
        efghi

          row=1;
         while(row<=n){
            col=1;
                while(col<=row){
                    char ch='a'+row+col-2;
                cout<<ch;
                col=col+1;
            }
            cout<<"\n";
            row=row+1;
        }*/

      //e
    /* de
        cde
        bcde
        abcde
         row=1;
         while(row<=n){
            col=1;
            char ch='a'+n-row;
                while(col<=row){
                cout<<ch;
                ch=ch+1;
                col=col+1;
            }
            cout<<"\n";
            row=row+1;
        }*/

    
        //abc
        //bcd
        //cde
        row=1;
        while(row<=n){
            col=1;
            char ch='a'+row-col;
            while(col<=n){
                cout<<ch;
                ch=ch+1;
                col=col+1;
            }
            cout<<endl;
            row=row+1;

        }
}