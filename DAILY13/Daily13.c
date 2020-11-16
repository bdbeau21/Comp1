// Include Section
#include <stdio.h>

// Conversion length function
void convert_lengths(void);

// Conversion weight function
void convert_weight(void);

// Convert length to metric
void length_to_metric(void);

// Convert length to us
void length_to_us(void);

// Convert weight to metric
void weight_to_metric(void);

// Convert weight to US system
void weight_to_us(void);

// Main function
int main(int argc, const char * argv[])
{
    int number=1;         // Integer number declared
    
    // Do while for statement running program more than once
    do
    {
        int num=-1;
        // Asks user to input a positive number
        printf("Please enter\n 0 - to quit,\n 1 - to convert length,\n 2 - to convert weights: ");
        // Used to read in number
        scanf("%d", &num);
        fflush(stdin);
        
        // Error checks number is positive
        while (num < 0 || num >2)
        {
            // Asks the user to reinput positive number
            printf("I'm sorry that number is not in range [0-2]: ");
            // Used to read in number
            scanf("%d", &num);
            fflush(stdin);
        }
        
        // Switch satement to designate usr choice
        switch(num)
        {
            case 0:
                number = 0;
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
    
    // While number does not equal zero
    while(number !=0);
    return 0;
}

// Conversion length function
void convert_lengths()
{
    int choice=-1;       // Choice for switch
    
    // do while for running function multiple times
    do
    {
        // Asks user to input a positive number
        printf("Please enter\n 0 - to quit,\n 1 - to convert lengths from feet/inches to meters/centimeters,\n 2 - to convert lengths from meters/centimeters to feet/inches : ");
        // Used to read in number
        scanf("%d", &choice);
        // Clears Buffer
        fflush(stdin);
            
        // Error checks number is positive
        while (choice < 0 || choice >2)
        {
            // Asks the user to reinput positive number
            printf("I'm sorry that number is not in range [0-2]: ");
            // Used to read in number
            scanf("%d", &choice);
            // Clears Buffer
            fflush(stdin);
        }
            
        // Switch statement to designate user choice
        switch(choice)
        {
            // Metric conversion
            case 1:
                // Call to length to metric conversion
                length_to_metric();
                break;
            // US conversion
            case 2:
                // Call to length to US conversion
                length_to_us();
                break;
        }
    }
    // While choice does not equal zero
    while(choice !=0);
}

// Conversion weight function
void convert_weight()
{
    int choice=-1;           // Choice for switch
    // Do while to run function more than once
    do
    {
        // Asks user to input a positive number
        printf("Please enter\n 0 - to quit,\n 1 - to convert weights from pounds/ounces to kilograms/grams,\n 2 - to convert weights from kilograms/grams to pounds/ounces : ");
        // Used to read in number
        scanf("%d", &choice);
        // Clears Buffer
        fflush(stdin);
        
        // Error checks number is positive
        while (choice < 0 || choice >2)
        {
            // Asks the user to reinput positive number
            printf("I'm sorry that number is not in range [0-2]: ");
            // Used to read in number
            scanf("%d", &choice);
            // Clears Buffer
            fflush(stdin);
        }
        
        // Switch statement to designate user choice
        switch(choice)
        {
            // Metric conversion
            case 1:
                // Call to metric weight conversion
                weight_to_metric();
                break;
            // US conversion
            case 2:
                // Call to US weight conversion
                weight_to_us();
                break;
        }
    }
    // While choice does not equal zero
    while(choice !=0);
}

// Function to convert length to metric system
void length_to_metric()
{
    printf("Length to metric\n");
}

// Function to convert length to US system
void length_to_us()
{
    printf("Length to US\n");
}

// Function to convert weight to metric system
void weight_to_metric()
{
    printf("Weight to metric\n");
}

// Function to convert weight to US system
void weight_to_us()
{
    printf("Weight to US\n");
}
