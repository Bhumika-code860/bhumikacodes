#include<stdio.h>
int main()
{int a=0,b=1,c,i=0,n;
printf("enter the number of terms of fibonacci series:");
scanf("%d",&n);
printf("%d",a);
printf("\n%d",b);
while(i<n-2)
{c=a+b;
printf("\n%d",c);
a=b;
b=c;}
return 0;}
