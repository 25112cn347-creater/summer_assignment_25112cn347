#include <iostream>
using namespace std;
int main(){

/* Write a program to Print star pyramid.     
     *    
    ***   
   *****  
  ******* 
 *********     */
  
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


/* Write a program to Print reverse pyramid. 
   *********  
    *******   
     *****    
      ***     
       *        */

   int n;
    cout<<"enter number of rows = ";
    cin >> n;
    int nst;
    
    nst = 2*n-1;
    for (int i=1;i<=n;i++){
        
    for (int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for (int k=1;k<=nst;k++){
            cout <<"*";
        }
        nst=nst-2;
        cout<<endl;
    }
}

/*  Write a program to Print number pyramid.     
      1    
     121   
    12321  
   1234321 
  123454321     */

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

/* Write a program to Print character pyramid.       
      A    
     ABA   
    ABCBA  
   ABCDCBA 
  ABCDEDCBA       */

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












