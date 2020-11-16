// Include directives
#include <stdio.h>

// Function to input positive integers
int inputNum(void);

// Function to find greatest common divisor
void findGCD(int a,int b);

// Main function
int main(int argc, const char * argv[])
{
    // Inputs first integer
    int a = inputNum();
    
    // Inputs second integer
    int b = inputNum();
    
    // Finds GCD of a and b
    findGCD(a,b);
    
    // Prints to continue
    printf("Press any key to continue . . .\n");
    return 0;
}

// Function to find greatest common divisor
void findGCD(int a,int b)
{
    int c;      // Holder variable
    
    // If first integer is greater than second
    if (a > b)
    {
       
        // Loop counts down from lower number
        for (c=b; c>= 0;c--)
        {
           // If both remainders equal zero
           if ( a %c ==0 && b%c==0)
           {
               printf("The largest integer that divides %d and %d is: %d\n",a,b,c);
               break;   // Exits
           }
        }
    }
    // If second integer is greater than first
    else if (b > a)
    {
        // Loop counts down from lower number
        for (c=a; c>= 0;c--)
        {
            // If both remainders equal zero
            if ( a %c ==0 && b%c==0)
            {
                printf("The largest integer that divides %d and %d is: %d\n",b,a,c);
                break;  // Exits
            }
        }
    }
    // If the two integers are equal
    else
    {
        c = b;  // C equals B
        printf("The largest integer that divides %d and %d is: %d\n",b,a,c);
    }
    return;
}

// Function to input a positive number
int inputNum(void)
{
    int number;         // Integer number declared
    // Asks user to input a positive number
    printf("Please enter a positive integer: ");
    // Used to read in number
    scanf("%d", &number);
    
    // Error checks number is positive
    while (number<=0)
    {
        // Clears Buffer
        fflush(stdin);
        // Asks the user to reinput positive number
        printf("I'm sorry that number is uncegonized or not positive: ");
        // Used to read in number
        scanf("%d", &number);
    }
    return number;  // Returns integer
}
