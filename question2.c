#include<stdio.h>
#include<math.h>
int main()
{float p,roi,t,si,amount,ci;
printf("enter principal amount:");
scanf("%f",&p);
printf("enter the rate of interest:");
scanf("%f",&roi);
printf("enter the time period");
scanf("%f",&t);
si=(p*roi*t)/100;
amount=p*pow(1+rot/100,t);
ci=amount-p;
printf("the simple interest is %f",si);
printf("the compount interest is %f,ci);
return 0;
  }
