#include <stdio.h>

/*
*  Find Least Common Multiple of a given array of numbers
*/

int lcm( unsigned int* arr , int n )
{
    int i, j;
    int found = 0;
    
    for( i=1; ; i++)
    {  
        
        found = 1;
        for(j =0; j< n; j++)  
        {
            if( i % arr[j] != 0) {
                found = 0;
                break;
            }           
        }         
        
        if( found ){
            break;
        }
    }
    
    return i;
    
}


int main()
{
    int arr[] = { 7,6,9,10,34,12,8, 15 };
      
    printf("LCM %d \n", lcm(arr, 8));

    return 0;
}
