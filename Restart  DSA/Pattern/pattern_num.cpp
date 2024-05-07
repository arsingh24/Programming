#include<iostream>
using namespace std;

int main(){


 /*int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //space
        int space=row-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //star
        int col=1;
        while(col<=n-row+1){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;                                                                                                  
    }*/

    /*int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //space
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //star
        int col=1;
        while(col<=row){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;                                                                                                  
    }*/

  
    /*int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int space=row-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while(col<=n-row+1){
           cout<<col+row-1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }*/
    
    /*int n;
    cin>>n;
    int row=1;
    int value=1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while(col<=row){
            cout<<value;
            value=value+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }*/

    /*int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //1st space
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //1st pattern
        int col=1;
        while(col<=row){
            cout<<col;
            col=col+1;
        }
        
        //2nd pattern
        int start=row-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout<<endl;
        row=row+1;
    }*/

    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        
        //1st pattern
        int col=1;
        while(col<=n-row+1){
            cout<<col;
            col=col+1;
        }
        //1st space
        int space=1;
        while(space<=2*row-2){
            cout<<"*";
            space=space+1;
        }
        
        //2nd pattern
        int col2=n-row+1;

        while(col2>=1){
            cout<<col2; 
            col2=col2-1;
        }
        cout<<endl;
        row=row+1;
    }

}