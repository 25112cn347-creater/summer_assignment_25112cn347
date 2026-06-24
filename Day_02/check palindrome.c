// wap to check whether a number is palidrome.
#include<stdio.h>
int main() {
 int  n, digit, reverse;
     
     printf("enter a number");
     scanf("%d",&n);
     int original=n;
     reverse = 0;
     while( n > 0){
         digit = n % 10;
         reverse =reverse*10+ digit;
         n = n/10;
     }
     if ( reverse == original ){
         printf(" palidrome number");
     }
     else{ printf (" not palidrome");
     }
   return 0;
}
