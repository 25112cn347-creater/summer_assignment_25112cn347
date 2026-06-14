/*  Write a program to Print number pyramid.     
      1    
     121   
    12321  
   1234321 
  123454321     */
#include<iostream>
using namespace std;
int main () {
int n;
    cout<<"enter number of rows = ";
    cin >> n;
    int nst;
    int a;
   
    for (int i=1;i<=n;i++){
        a=i-1;
    for (int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for (int k=1;k<=i;k++){
            cout<<k;
        }
        for(int m=1;m<=i-1;m++){
            cout<<a;
            a--; 
        }
       
        cout<<endl;
    }
}
