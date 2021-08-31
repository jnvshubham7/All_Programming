#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
     int n;
     printf("enter the sizeof array : ");
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++){
          scanf("%d",&arr[i]);
     } 
        
    //Number of elements present in an array can be calculated as follows    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Number of elements present in given array: %d", length);     
     
    return 0;    
}