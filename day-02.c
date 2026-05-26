#include <stdio.h>
int main (){
  // wap to print the sum of the digits of a given number
int n,digit, sum;
printf("enter a number");
scanf("%d",&n);
sum =0 ;
while(n>0){
digit=n%10;
sum= sum+digit;
n=n/10;
}
printf("sum = %d",sum);

// wap to reverse a number

    int num, reverse = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    printf("Reversed number = %d\n", reverse);

    // wap to find product of digit
int num, digit, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        product = product * digit;
        num = num / 10;
    }
    printf("Product of digits = %d\n", product);


// wap to check whether a number is pallidrone

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
         printf(" pallidrone number");
     }
     else{ printf (" not pallidrone");
     }
   return 0;
}










