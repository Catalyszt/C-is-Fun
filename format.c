#include <stdio.h>


/*
   Format a given decimal number to octal and binary without using the printf format.
*/



unsigned int DecimalToOctal(unsigned int decimal)
{
    int i ;
    unsigned int octal = 0;
    
    for(i=1; decimal >0; i*=10)
    {
        // find octates and give them the decimal weight to pack them as decimal digits.
        octal += (decimal%8)*i;
        decimal /= 8;
    }
    
    return octal;
    
}

unsigned int DecimalToBinary(unsigned int decimal)
{
    int i ;
    unsigned int bin = 0;
    
    for(i=1; decimal >0; i*=10)
    {
        // find bit values and give them the decimal weight to pack them as decimal digits.
        bin += (decimal%2)*i;
        decimal /= 2;
    }
    
    return bin;
    
}

int main()
{
    unsigned int n = 10;

    printf("given %d is equal to 0%d and 0b%d \n", n, DecimalToOctal(n), DecimalToBinary(n));
  
    return 0;
}
