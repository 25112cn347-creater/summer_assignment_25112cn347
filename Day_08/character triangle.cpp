/*Write a program to Print character triangle.
A
AB 
ABC 
ABCD 
ABCDE */
#include<iostream>
using namespace std;
int main () {
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
