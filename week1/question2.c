#include<stdio.h>
int main()
{
    int a,b;
    printf("Please enter first no \n");
    scanf("%d",&a);
    printf("Please enter second no \n");
    scanf(" %d",&b);
    
    if(a>b)
    {
    printf("%d is greater",a);
    }
    else if (b>a)
    {
    printf("%d is greater",b);
    }
    else {
    printf("Numbers are equal");
    }
return 0;
}