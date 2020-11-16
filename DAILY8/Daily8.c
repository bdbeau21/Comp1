// Include Directives
#include <stdio.h>
#include <stdlib.h>

// Main Program
int main(int argc, const char * argv[]) {
    int number;         // Integer number declared
    // Asks user to input negative number
    printf("Please enter a negative integer: ");
    // Used to read in number
    scanf("%d", &number);
    // Error checks number to be less than zero
    while (number>=0)
    {
        // Clears Buffer
        fflush(stdin);
        // Asks the user to reinput negative number
        printf("I'm sorry, you must enter a negative integer less than zero: ");
        scanf("%d", &number);
        
    }
    printf("Press any key to continue . . .\n");
    return 0;
}
