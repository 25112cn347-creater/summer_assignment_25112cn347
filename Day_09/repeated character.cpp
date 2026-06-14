/* Write a program to Print repeated character pattern. 
A 
BB 
CCC 
DDDD 
EEEEE   */
#include<iostream>
using namespace std;
int main () {
 int n ; // enter n=5 for this pattern.
  cout<<"enter sides of triangle";
  cin>>n;
  for(int i=1;i<=n;i++){
      for (int j=1;j<=i;j++){
          cout<<(char)(i+64);
      }
      cout<<endl;
  }
}
