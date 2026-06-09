// The programs are in c++ 
//Write a program to Print half pyramid pattern.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter sides of triangle";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


/* Write a program to Print number triangle.
1 
12 
123 
1234 
12345 */

int n; // take n=5 for above pattern
    cout<<"enter sides of triangle";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

/*Write a program to Print character triangle.
A
AB 
ABC 
ABCD 
ABCDE */

int n; // take n=5 for above pattern
    cout<<"enter sides of triangle";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i; j++){
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
}

/* Write a program to Print repeated-number pattern. 
1 
22 
333 
4444 
55555 */ 

int n; // take n=5 for above pattern
    cout<<"enter sides of triangle";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}














