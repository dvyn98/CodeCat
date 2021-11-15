//CREATE STAR TRIANGLE PATTERN USING LOOP
#include<stdio.h>
int main()
{
    int i=0,j,n;
    printf("Enter the no of rows \n");
    scanf(" %d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}