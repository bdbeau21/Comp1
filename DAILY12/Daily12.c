// Include section
#include <stdio.h>
#include <stdlib.h>

//
void clear_keyboard_dowhile(void);

// Conversion length function
void convert_lengths(void);

// Conversion weight function
void convert_weight(void);

int inputNum(void);
// Main function
int main(int argc, const char * argv[])
{
    int i=1;
    // Do while for statement running program more than once
    while(i != 0)
    {
        int number1=1;
        // Switch satement to designate usr choice
        while(number1)
        {
            printf("Please enter 0 - to quit,\n 1 - to convert length,\n 2 - to convert weight: ");
            scanf("%d", &number1);
            fflush(stdin);
            switch(number1)
            {
                case 0:
                    return 0;
                    break;
                // Length chosen
                case 1:
                    // Call to conversion length function
                    convert_lengths();
                    break;
                // Width chosen
                case 2:
                    // Call to conversion weight function
                    convert_weight();
                    break;
            }
        }
    }
    return 0;
}

// Conversion length function
void convert_lengths()
{
    // Print length chosen
    printf("User choices length.\n");
}

// Conversion weight function
void convert_weight()
{
    // Print weight chosen
    printf("User choices weight.\n");
}

void clear_keyboard_dowhile()
{
    char ch;
    do {
        scanf("%c", &ch);
    }
    while (ch != '\n');
    
    return;
}
