#include<stdio.h>
int main()
{int maths,physics,pps,electrical,evs,sum,per;
printf("enter the marks of maths,physics,pps,electrical,evs respectively:");
scanf("%d%d%d%d%d",&maths,&physics,&pps,&electrial,&evs);
sum=(maths+physics+pps+electrical+evs);
per=(sum/500)*100;
printf("the sume ad percentage of marks are %d %d",sum,per);
return 0;
}
