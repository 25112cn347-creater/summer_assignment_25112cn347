#include<stdio.h>
int main(){

//Write a program to Recursive factorial. 

int factorial(int n);
int main() {
int n;
printf("enter n : ");
scanf("%d", &n);
printf("factorial is : %d", factorial(n));
return 0;
}
int factorial(int n) {
if(n == 0) {
return 1;
}
int factnm1 = factorial(n-1);
int factn = factnm1 * n;
return factn;
}

//Write a program to Recursive Fibonacci. 


int fib(int n)
{
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

//Write a program to Recursive sum of digits.


int sumDigits(int n)
{
    if(n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumDigits(n));  


//Write a program to Recursive reverse number.


int rev = 0;

int reverse(int n)
{
    if(n == 0)
        return rev;

    rev = rev * 10 + (n % 10);
    return reverse(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reverse = %d", reverse(n));

    return 0;
}




