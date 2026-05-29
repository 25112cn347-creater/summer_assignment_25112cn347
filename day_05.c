#include<stdio.h>
int main(){

//Write a program to Check perfect number. 

    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    for(i = 1; i < num; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    if(sum == num) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }


// Write a program to Check strong number. 

    int num, temp, rem, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0) {
        rem = temp % 10;

        fact = 1;
        for(i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if(sum == num) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is not a Strong Number.\n", num);
    }


//Write a program to Print factors of a number.

    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are:\n", num);

    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d ", i);
        }
    }

  //Write a program to Find largest prime factor. 

    int num, i, largest = 1, j, prime;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++) {
        if(num % i == 0) {

            prime = 1;

            for(j = 2; j < i; j++) {
                if(i % j == 0) {
                    prime = 0;
                    break;
                }
            }

            if(prime == 1) {
                largest = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}

    
    return 0;
}
