#include <stdio.h>

/*
* Test if a given number is Palindrome.
* When digits are reversed in a Palindrome number, the value remains the same.
* Example: 1234321 
*/ 


int isPalindrome(unsigned int number)
{
    unsigned int rev = 0;
    unsigned int digit ;
    unsigned int n  = number;

    /*
    * In decimal number system, division by 10 will right shift the digits.
    * Mupltiplication by 10 will left shift the digits.
    */
    while(n)
    {
        digit = (n%10); // take the right most digit
        
        // Pack it in rev from left.
        rev *= 10;      // Shift the current digits to left.
        rev += digit;   // add the new digit to the right.

        // Take next right most digit from the number. 
        // If n is 0, no more digts.
        n /= 10; 
    }

    printf("number %d , reversed value %d \n", number, rev);

    return ( number == rev);

}



void main()
{
    unsigned int n  ;

    printf("Enter your number?\n");

    scanf("%d", &n);

    if( isPalindrome(n) ){
        printf("%d is a Palindrome\n", n);
    }
    else{
        printf("%d is not a Palindrome\n", n);
    }

}
