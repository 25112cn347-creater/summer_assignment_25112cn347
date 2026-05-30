#include<stdio.h>
int main(){

//Write a program to Convert decimal to binary.
    int num, rem;
    int binary = 0, reverse = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 2;
        binary = binary * 10 + rem;
        num = num / 2;
    }

    while (binary != 0) {
        rem = binary % 10;
        reverse = reverse * 10 + rem;
        binary = binary / 10;
    }

    printf("Binary = %d", reverse);

    //Write a program to Convert binary to decimal. 

    int binary, rem, decimal = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary != 0) {
        rem = binary % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        binary = binary / 10;
    }

    printf("Decimal = %d", decimal);


//Write a program to Count set bits in a number.
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        if (n % 2 == 1) {
            count++;
        }
        n = n / 2;
    }

    printf("Number of set bits = %d", count);

//Write a program to Find x^n without pow(). 
  
    int x, n, i, result = 1;

    printf("Enter x and n: ");
    scanf("%d%d", &x, &n);

    for(i = 1; i <= n; i++)
    {
        result = result * x;
    }

    printf("%d", result);

    return 0;
}
