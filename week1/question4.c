#include<stdio.h>
int main()
{
int a;
printf( "Please enter the year \n ");
scanf("%d",&a);
if(a%4==0)
{
printf("\n %d is a leap year",a);
}
else
{
printf("\n %d is not a leap year",a);
}
return 0;

}