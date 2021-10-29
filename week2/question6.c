#include<stdio.h>
#include<math.h>
int main()
{
    int i,base=1,ex=1,power=1;
    printf("Enter two no:\n");
    scanf("%d %d",&base,&ex);
    for(i=1;i<=ex;i++)
    {
        power=power*base;
    }
printf("%d^%d = %d",base,ex,power);
return 0;
}