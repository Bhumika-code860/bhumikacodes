#include<stdio.h>
int main()
{int a,b;
char c;
printf("enter two operands:");
scanf("%d%d",&a,&b);
printf("enter the operator:");
scanf("%c",&c);
switch(c)
  case'+':
{printf("%d",a+b);
break;}
case'-':
  {printf("%d",a-b);
break;}
case'*':
  {printf("%d",a*b);
break;}
case'/':
{printf("%d",a/b);
break;}
case'%':
{printf("%d",a%b);
break;}
default:
printf("incorrect operator");
return 0;
}
