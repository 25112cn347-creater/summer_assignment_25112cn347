 // wap to check whether a number is armstrong or not
 #include<stdio.h>
int main() {
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
return 0;
}
