// wap to print the sum of the digits of a given number.
#include <stdio.h>
int main (){
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
return 0;
}
