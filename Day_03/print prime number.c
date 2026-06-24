//wap to print prime numbers upto a given range
#include<stdio.h>
int main() {
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
return 0;
}
