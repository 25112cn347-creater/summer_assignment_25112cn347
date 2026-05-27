#include<stdio.h>
int main(){
   // wap to check whether a number is prime or not

int num, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        flag = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("%d is a Prime Number", num);
    else
        printf("%d is Not a Prime Number", num);

//wap to print prime numbers upto a given range

int range, flag, i,j;
    printf("enter range");
    scanf("%d",&range);
    for( i =2; i<range; i++){
        flag=1;
        for (j=2; j<=i/2; j++){
        if( i%j==0){
            flag=0;
            break;
        }
        }  
         if (flag==1)
    {printf ("%d\t",i);}
    }

// wap to find GCD of two numbers


int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD = %d", a);


//wap to find lcm of two numbers


 int a, b, hcf, lcm, temp;
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while(y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    hcf = x;

    lcm = (a * b) / hcf;

    printf("LCM = %d", lcm);

    return 0;
}
