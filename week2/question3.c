#include<stdio.h>
int main()
{
    int i,n,arm=0,sum=0;
    printf("Enter the no \n");
    scanf("%d",&n);
    for(i=n;n!=0;n=n/10)
    {
     sum=n%10;
     arm=arm+(sum*sum*sum);
     //printf("%d \n",sum);
    }
    //printf("%d \n",arm);
    
    if(arm==i)
    printf("It is an armstrong number");
    else
    printf("It is not an armstrong no");
    return 0;
    

}