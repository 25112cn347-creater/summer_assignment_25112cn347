//Write a program to Print Armstrong numbers in a range. 
#include<stdio.h>
int main () {
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
