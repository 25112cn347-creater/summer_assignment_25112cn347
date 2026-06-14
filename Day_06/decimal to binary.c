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
return 0;
}
