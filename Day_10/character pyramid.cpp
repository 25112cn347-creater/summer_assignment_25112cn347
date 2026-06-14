/* Write a program to Print character pyramid.       
      A    
     ABA   
    ABCBA  
   ABCDCBA 
  ABCDEDCBA       */
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
            cout<<(char)(k+64);
        }
        for(int m=1;m<=i-1;m++){
            cout<<(char)(a+64);
            a--; 
        }
       
        cout<<endl;
    }
}
