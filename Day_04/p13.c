 //wap to print fibnocci series
#include<stdio.h>
#include<math.h>
int main(){
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
return 0;
}
