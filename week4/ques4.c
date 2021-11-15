#include<stdio.h>
int main(void)
{
	int ar[5],i,x,j,sum,flag=0;
    printf("Enter the value into array"); 
	for(i=0;i<5;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nEnter the value of x:\n");
	scanf("%d",&x);
	for(i=0;i<5;i++)
	{
		flag=0;
		for(j=0;j<5;j++)
		{
			 if(i==j)
			 	continue;
			if(ar[i]+ar[j]==x)
			{
				printf("%d %d ",i,j);
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}

 return 0;
}