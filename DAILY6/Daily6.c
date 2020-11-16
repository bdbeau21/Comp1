// Include Directives
#include <stdio.h>

// Main Program
int main(int argc, const char * argv[])
{
    int number;         // Integer number declared
    // Asks user to input positive number
    printf("Please enter a positive integer: ");
    scanf("%d", &number);
    
    // Error checks number to be greater than zero
    while (number < 0)
    {
        printf("Integer is less than zero!\n");
        printf("Please enter a positive integer: ");
        scanf("%d", &number);
    }
     
    // If Statement checks if number is even number
    if (number % 2 == 0)
    {
        // Result equals number divided by two
        number = number/2;
    }
    // Number is odd
    else
    {
        // Results = number times by three plus one
        number = number * 3 +1;
    }
    // Output of final result
    printf("The next value of the number is: %d\n",number);
    return 0;
}
