#include<stdio.h>
int main()
{int pps,evs,physics,chem,maths,per;
printf("enter the marks of pps,evs,physis,chem,maths:");
scanf("%d%d%d%d%d",&pps,&evs,&physics,&chem,&maths);
per=((pps+evs+maths+physics+chem)/500)*100;
if(per>=90&&per<=100)
printf("A grade");
else if(per>=80&&per<90)
printf("B grade");
else if(per>=60&&per<80)
printf("C grade");
else
printf("D grade");
return 0;
}
