#include<stdio.h>
int main()
{int a,b,c;
printf("enter the value of first variable:");
scanf("%d",&a);
printf("enter the vaue of second variable:");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("first variable after swapping is %d",a);
printf("\nsecond variable after swapping is %d",b);
return 0;
}
