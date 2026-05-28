#include<stdio.h>
#include<math.h>
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
  printf("Nth Fibonacci term = %d", c);
    }

//Write a program to Find nth Fibonacci term.
 int n, a = 0, b = 1, c, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n == 1) {
        printf("Nth Fibonacci term = %d", a);
    }
    else if (n == 2) {
        printf("Nth Fibonacci term = %d", b);
    }
    else {
        for (i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }


       // wap to check whether a number is armstrong or not

       int n,on,rem,result = 0;

    printf("Enter a number: ");
    scanf("%d",&n);

    on = n;

    while(n != 0) {
        rem = n % 10;
        result = result + (rem * rem * rem);
        n = n / 10;
    }

    if(result == on) {
        printf("Armstrong number");
    }
    else {
        printf("Not Armstrong");
    }

//Write a program to Print Armstrong numbers in a range. 

int start, end, num, original, rem, sum, digits;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for(num = start; num <= end; num++) {

        original = num;
        sum = 0;
        digits = 0;

        int temp = num;
        while(temp != 0) {
            digits++;
            temp = temp / 10;
        }

        temp = num;

        while(temp != 0) {
            rem = temp % 10;
            sum = sum + pow(rem, digits);
            temp = temp / 10;
        }
        if(sum == original) {
            printf("%d\n", original);
        }
    }

return 0;
    }
   






       

      









