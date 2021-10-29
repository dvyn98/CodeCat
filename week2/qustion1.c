#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter the no upto which you want to find summation \n");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
sum+=i;
printf(" %d ",i);
}
printf(" \n sum= %d",sum);
return 0;
}