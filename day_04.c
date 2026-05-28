#include<stdio.h>
int main(){
   //wap to print fibnocci series
 int n,a=0,b=1,i,c;
    printf("enter a number");
    scanf ("%d",&n);
    printf("fibnocci series:\n");
    for(i=0;i<=n;i++){
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }

//Write a program to Find nth Fibonacci term.

