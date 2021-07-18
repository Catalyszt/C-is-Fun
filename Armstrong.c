/*
    Check if the number is a Armstrong number.
    Armstrong number: let's assumes the number has n digits. Then if the sum of nth 
    power of all digits are equal to the number itself, that number is said to be 
    a Armstrong number.
*/


int isArmstrongNumber(unsigned int n)
{
    unsigned int temp = n;
    unsigned int digits = 0;
    double sum = 0;
    unsigned int digit;
    
    // find number of digits.
    while(temp){ 
        temp /= 10;
        digits ++;
    }
    
    // find sum of power of digits.
    temp = n;
    while(temp){
        digit = temp%10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    
    return ( (unsigned int)sum == n);
    
}



int main()
{
    unsigned int n ;
    printf("enter number ?\n");
    scanf("%d\n", &n);
    
    if( isArmstrongNumber(n)){
        printf("%d is a Armstrong number \n", n);
    }
    else{
        printf("%d is not a Armstrong number \n", n);
    }

    return 0;
}
