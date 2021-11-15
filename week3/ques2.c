//CREATE TRIANGLE PATTERN
#include<stdio.h>
int main()
{
    int i=0,j,n;
    printf("Enter the no of rows \n");
    scanf(" %d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}