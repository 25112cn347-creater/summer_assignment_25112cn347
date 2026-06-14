/* Write a program to Print hollow square pattern. 
*** 
*   * 
*   * 
*   * 
***      */
#include<iostream>
using namespace std;
int main() {

int n ; // enter n=5 for this pattern.
  cout<<"enter sides of triangle";
  cin>>n;
  for(int i=1;i<=n;i++){
      for (int j=1;j<=n;j++){
          if (i==1||j==1||i==n || j==n){
              cout<<"*";
          }
          else{ cout<<" ";}
      }
      cout<<endl;
  }
}
