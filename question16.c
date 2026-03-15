#include<stdio.h>
int main()
{int n,i=2,val=0;
printf("enter the number to be checked:");
scanf("%d",&n);
while(i<n)
{if(n%i==0)
{printf("not prime");
val=1;
break;}
 i++;}
if(val==0)
  printf("not prime");
return 0;}
