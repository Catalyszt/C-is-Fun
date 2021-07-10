#include <stdio.h>

/*
*  Check if a given number is a prime number.
*  Print all the prime numbers upto the given number.
*/




/*
* Prime Number: A number which divisible only by 1 and that number.
* 0 and 1 are not prime numbers. 2 is a prime number. 
*/
int isPrimeNumber(unsigned int n)
{
    int i;

    if( n == 0 || n == 1 ){
        return 0; // 0 and 1 are not prime numbers.
    }


    // if divisible without remainder ( excluding 1 and the number itself) it's not a prime number
    // It's sufficient to test divisibility upto n/2.
    
    for(i=2;i<=n/2; i++){

        if( n%i == 0 )
            return 0;
    }

    return 1;
}


void print_prime_numbers( unsigned int upto )
{
    int i,j;

    for(i=2; i<= upto; i++)
    {
        if( isPrimeNumber(i) ){
            printf("%d ", i);
        }
    }
    printf("\n");
}



void main()
{

    unsigned int n;

    printf("enter your number?\n");
    scanf("%d", &n);

    if( isPrimeNumber(n) ){
        printf("%d is a prime numer\n", n);
    }
    else{
        printf("%d is  not a prime numer\n", n) ;

    }

    printf("prime numbers upto %d :\n", n);
    print_prime_numbers(n);

}
