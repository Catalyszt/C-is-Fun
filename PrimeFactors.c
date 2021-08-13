#include <stdio.h>


/*
* Find prime factors of the given number. 
*/

void prime_factors( int num )
{
    int prime_nums[num];
    int prime_num_count = 0;
    int i , j;
    int prime ;

    printf("found prime numers upto %d: ", num);
    for(i=2; i<= num; i++)
    {
        prime = 1;
        for (j=2; j<= i/2; j++){
            if( i % j == 0 ){
                prime = 0;
                break;
            }
        }


        if( prime){
            prime_nums[prime_num_count++] = i;
            printf("%d,", i);
        }        
    }
    printf("\n");

    printf("prime factors: %d = ", num);

    while(num > 1)
    {
        for(i =0; i< prime_num_count; i++){
            if( num % prime_nums[i] == 0){
                
                num /= prime_nums[i] ;

                if( num > 1){
                    printf("%dX", prime_nums[i] );
                }
                else{
                    printf("%d ", prime_nums[i] );
                }

                break;
            }
        }

    }

}


int main()
{
    prime_factors(100);  
    return 0;
}
