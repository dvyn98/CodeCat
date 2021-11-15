//COIN FLIP GAME
#include<stdio.h>
int main(void)
{
    int test,game,initial,noc,guess,d=0;//noc=no of coin
    printf("\nTest case");
    scanf("&d",test);//input for test case
    printf("\nNo of games:-");
    scanf("&d",game);//input for the number of games played
    int gamer[game];
    for(int i=0;i<test;i++)
    {
        printf("Test case %d",i+1);
        for(int j=0;j<game;j++)
        {
        int count =0;    
        scanf("&d",initial);
        scanf("&d",noc);
        scanf("%d",guess);
        int ar[noc];
        for ( int k = 0; k < noc; k++)
        {
           ar[k]=initial; 
        }
        for ( int k = 0; k < noc; k++)
        {
           for(int l=0;l<=k;l++)
           {
               if(ar[l]==1)
               ar[l]=2;
               else if(ar[l]==2)
               ar[l]=1;
           } 
        }
         for ( int k = 0; k < noc; k++)
        {
           if(ar[k]==guess)
            count++;
        }   
        gamer[d]=count;
        d++;
        }
        printf("\nResult:-");
        for ( int k = 0; k<d; k++)
        {
        printf("%d",gamer[k]) ;
        }
    }

    return 0;
}