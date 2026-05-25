include<stdio.h>
int main()
{
  //1.  WAP to calculate the sum of n natural no.s.
  int n,sum,i;
printf("enter the number:");
scanf("%d',&n);
  for(i=1;i<=n;i+=)
  { sum=sum+i}
  printf("the sum of n natural numbers:",sum);


// 2. wap to print a multiplication of table of a given number
int n,i;
char c;
printf("the table of number:");
scanf("%d",&n);
char c=X;
for(i=1;i<=10;i++)
{printf("the table of %d %d%d",n,i,n*i);

// 3. WAP to find the factorical of a given number.
int n,i,fact=1;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{  fact=fact*i;
}
printf("the factorial of given no.:%d",fact);
 //4. WAP to count the no. of digits.
 int n,i,count=0;
 printf("enter the number:");
 scanf("%d,&n);
   for(i=0;i<=n;i++);
   n=n/10;
   count++;
   printf("the no. of digits:%d",count);
return 0;
}



