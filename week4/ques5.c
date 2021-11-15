#include<stdio.h>
int main()
{   int n;
    printf("Enter the no of digits\n");
    scanf("%d",&n);
   int a[n],i,count=0;
   for(i=0;i<n;i++)
   {
       printf("Enter the %d element:",i);
       scanf("%d",&a[i]);
       }
   for(i=0;i<n;i++)
   if(a[i]==0)
   count++;
   for(i=0;i<n;i++)
   {
       if(i<count)
       a[i]=0;
       else
       a[i]=1;
       
   }
   printf("\n Array after  sorting");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
   printf("\n");

    
    return 0;
}