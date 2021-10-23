#include<stdio.h>
int main()
{
int a,b,c;
printf("Please enter first no \n");
scanf("%d",&a);
printf("Please enter second no \n");
scanf("%d",&b);
printf("Please enter third no \n");
scanf("%d",&c);
if((a>b)&&(a>c))
{
    printf("\n %d is greatest",a);
}
else if ((b>c)&&(b>a))
{
    printf("\n %d is greatest",b);
}
else
{
    printf("%d is greatest",c);
}
return 0;

}

