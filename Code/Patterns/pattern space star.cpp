#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cin>>n;

    //    *
      /* **
        *** 
    /*row=1;
    while(row<=n){
        //for space
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //for star
        col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }*/

    //****
   /* ***
      **
      *
       row=1;
    while(row<=n){
       col=1;
       while(col<=n-row+1){
        cout<<"*";
        col=col+1;
       }
       cout<<endl;
       row=row+1;
    }*/

     //****
     /* ***
        **
         * 
    row=1;
    while(row<=n){
       col=1;
       int space=row-1;
       while(space){
        cout<<" ";
        space=space-1;
       }
       while(col<=n-row+1){
        cout<<"*";
        col=col+1;
       }
       cout<<endl;
       row=row+1;
    }*/

      //1111
      /* 222
          33
           4 
     row=1;
     while(row<=n){
       col=1;
       int space=row-1;
       while(space){
        cout<<" ";
        space=space-1;
       }
       while(col<=n-row+1){
        cout<<row;
        col=col+1;
       }
       cout<<endl;
       row=row+1;
    }*/
   //   1
     /*22
      333
     4444
       row=1;
    while(row<=n){
       col=1;
       int space=n-row;
       while(space){
        cout<<" ";
        space=space-1;
       }
       while(col<=row){
        cout<<row;
        col=col+1;
       }
       cout<<endl;
       row=row+1;
    }*/
     
     //1234
      /*234
         34
          4

     row=1;
     while(row<=n){
        int space=row-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        col=1;
        while(col<=n-row+1){
            cout<<col+row-1;
            col=col+1;

        }
        cout<<endl;
        row=row+1;
     }*/
      //      1
           /*23
            456
          78910
       row=1;
       int count=1;
       while(row<=n){
         col=1;
         int space =n-row;
         while(space){
            cout<<" ";
            space=space-1;
         }
         while(col<=row){
            cout<<count;
            count=count+1;
            col=col+1;
         }
         cout<<endl;
         row=row+1;
       }*/
       
      n=5;
       row=1;
       while(row<=n){
         col=1;
         while(col<=n-row+1){
            cout<<col;
            col=col+1;
         }
         int num=1;
         while(num<=row){
            cout<<n-num+1;
            num=num+1;

         }
         cout<<endl;
         row=row+1;
       }



         //1
       /* 121
        12321
        1234321
       row=1;
    while(row<=n){
       col=1;
       //space
       int space=n-row;
       while(space){
        cout<<" ";
        space=space-1;
       }
       //triangle
       while(col<=row){
        cout<<col; 
        col=col+1;
       }

      //2nd traingle
        int pat=row-1;
       while(pat){
        cout<<pat;
        pat=pat-1;
       }
       cout<<endl;
       row=row+1;
    }*/
}


