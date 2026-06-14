 //4. WAP to count the no. of digits.
#include<stdio.h>
int main() {
 int n,i,count=0;
 printf("enter the number:");
 scanf("%d,&n);
   for(i=0;i<=n;i++);
   n=n/10;
   count++;
   printf("the no. of digits:%d",count);
return 0;
}
