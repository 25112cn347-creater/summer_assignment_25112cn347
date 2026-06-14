#include <iostream>
using namespace std;
int main(){

/* Write a program to Print star pyramid.     
     *    
    *   
   ***  
  *** 
 ***     */
  
int n;
    cout<<"enter number of rows = ";
    cin >> n;
    int nst;
    
    nst = 1;
    for (int i=1;i<=n;i++){
        
    for (int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for (int k=1;k<=nst;k++){
            cout <<"*";
        }
        nst=nst+2;
        cout<<endl;
    }
}
