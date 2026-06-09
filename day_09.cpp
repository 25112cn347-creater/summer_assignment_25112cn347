#include<iostream>
using namespace std;
int main(){
/* Write a program to Print reverse star pattern. 
***** 
**** 
*** 
** 
*           */

 int n ;  // enter n=5 for this pattern.
  cout<<"enter sides of triangle";
  cin>>n;
  for(int i=1;i<=n;i++){
      for (int j=1;j<=n+1-i;j++){
          cout<<"*";
      }
      cout<<endl;
  }
}

/*Write a program to Print reverse number triangle.  
12345 
1234 
123 
12 
1   */

int n ; // enter n=5 for this pattern.
  cout<<"enter sides of triangle";
  cin>>n;
  for(int i=1;i<=n;i++){
      for (int j=1;j<=n+1-i;j++){
          cout<<j;
      }
      cout<<endl;
  }
}


/* Write a program to Print repeated character pattern. 
A 
BB 
CCC 
DDDD 
EEEEE   */

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

/* Write a program to Print hollow square pattern. 
***** 
*   * 
*   * 
*   * 
*****      */


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









