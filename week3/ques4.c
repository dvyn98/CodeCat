//TO PRINT X PATTERN

#include<stdio.h>
int main()
{
    {
    int i, j, n;
    

    printf("Enter No of rows: ");
    scanf("%d", &n);


    for(i=1; i<=n*2-1; i++)
    {
        for(j=1; j<=n*2-1; j++)
        {
            if(j==i || (j==(n*2-1) - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
}
