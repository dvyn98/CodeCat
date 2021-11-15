//frequency of elements of an array
#include <stdio.h>

void main()
{
    int arr[100], fr[100];
    int n, i, j, count;
       

       printf("Input the number of elements  :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
		  fr[i] = -1;
	    }
    for(i=0; i<n; i++)
    {
        count= 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                fr[j] = 0;
            }
        }

        if(fr[i]!=0)
        {
            fr[i] = count;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(fr[i]!=0)
        {
            printf("%d occurs %d times\n", arr[i], fr[i]);
        }
    }
}