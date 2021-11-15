//REVERSE THE ELEMENT OF AN ARRAY
#include <stdio.h>    
     
int main()    
{    
    int total,i;
    printf("How many numbers you want to enter : ");
    scanf("%d", &total);     
    int arr[total];     
    for (i = 0; i < total; i++)
    {
        printf("Enter element for position %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
        
    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");    
   
    for (int i = length-1; i >= 0; i--) {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
}    