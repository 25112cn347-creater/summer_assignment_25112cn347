//wap to find lcm of two numbers
#include<stdio.h>
int main() {
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
