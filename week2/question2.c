#include<stdio.h>
int main()
{
int i,n,fac=1;
printf("Enter the no whose factorial you want to find \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    fac*=i;

}
printf("FACTORIAL IS %d",fac);
return 0;
}