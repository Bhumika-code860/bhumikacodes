#include<stdio.h>
int main()
{int n,i=1,sumeven=0,sumodd=0;
printf("enter the number:");
scanf("%d",&n);
while(i<=n)
{if(i%2==0)
  sumeven=sumeven+i;
else
  sumodd=sumodd+i;
i++;}
printf("sum of even numbers is %d",sumeven);
printf("\nsum of odd numbers is %d",sumodd);
return 0;
}
