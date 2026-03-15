#include<stdio.h>
int main()
{int a,b,c;
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
printf("enter the third number:");
scanf("%d",&c);
if(a>b&&a>c)
printf("first number is greatest");
else if(b>a&&b>c)
printf("second number is greatest");
else
printf("third number is greatest");
return 0;
}
