#include<stdio.h>
int main()
{
     int i,n,rev=0;
    printf("Enter the no \n");
    scanf("%d",&n);
    for(i=n;n!=0;n=n/10)
    {
     rev=n%10;
      printf("%d",rev);
    }
    return 0;
}