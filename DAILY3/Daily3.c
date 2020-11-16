#include <stdio.h>

int num = 42;           // INTEGER INITIALIZED TO 42
char letter = 'J';      // CHARCTER DECLARED WITH VALUE J
float pi = 3.14159;     // FLOAT FORMAT FOR PI
char percent = '%';     // PERCENTAGE SYMBOL FOR OUTPUT COMMAND

// MAIN PROGRAM
int main(void)
{
    // OUTPUTS THREE LINES OF CODE
    printf("%d is an integer and should be printed using %cd.\n", num, percent);
    printf("The character %c can be printed using %cc.\n", letter, percent);
    printf("Floating point numbers use %cf. %f is an example.\n",percent, pi);
    printf("Press any button to continue . . .\n");
    return 0; // RETURNS ZERO
}
