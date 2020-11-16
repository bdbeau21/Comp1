// Include Directives
#include <stdio.h>
#include <stdlib.h>

// Function to draw astericks in line
void draw_line(int number);

// Main Program
int main(int argc, const char * argv[]) {
    int number;         // Integer number declared
    // Asks user to input number of astericks
    printf("Please enter the number of astericks you want in your line: ");
    // Used to read in number
    scanf("%d", &number);
    
    // Error checks number to be between 1 and 79
    while ((number < 1)||(number>79))
    {
        // Clears Buffer
        fflush(stdin);
        // Asks the user to reinput number between 1 and 79
        printf("I'm sorry, that number is unrecognized or out of range, try [1,79]: ");
        // Used to read in number
        scanf("%d", &number);
    }
    draw_line(number);
    printf("Press any key to continue . . .\n");
    return 0;
}
void draw_line(int number)
{
    for(int i = 1; i <= number;i++)
    {
        printf("*");
    }
    printf("\n");
    return;
}
