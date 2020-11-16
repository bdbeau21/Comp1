// Include Section
#include <stdio.h>

// Conversion of us units of length to metric
void conversion(int *number, double *number1, double *number2, int *total);

// Conversion of us units of weight to metric
void conversion1(int *pound, double *pound1, double *ounce, int *total);

// Conversion length function
void convert_lengths(void);

// Conversion weight function
void convert_weight(void);

// Input feet and inches
void inputNum(int *number, double *number2);

// Input Pounds
void inputPounds(int *pound, double *ounce);

// Convert length to metric
void length_to_metric(void);

// Convert length to us
void length_to_us(void);

// Outputs Us length to metric
void printInfo(double number1, int total);

// Outputs Us weight to metric
void printInfo1(double pound1, int ans);

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
            // Quits Program
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
    int a=0,d=0;    // Intialize feet and total
    double b=0.0,c=0.0; // Initialize number1 and 2
    inputNum(&a,&c);   // Input feet and inches
    printf("The user inputted %d feet and %.2lf inchess\n", a,c);
    conversion(&a,&b,&c,&d);    // Converates to metric
    printInfo(b,d); // Prints conversion
}

// Function to convert length to US system
void length_to_us()
{
    printf("Length to US\n");
}

// Function to convert weight to metric system
void weight_to_metric()
{
    int e=0,i=0;    // Initialize variables pound and answer
    double g=0.0, h=0.0;    // Initialize variablea ounce1 and ounce2
    inputPounds(&e,&h);    // Input Pounds and ounces
    printf("The user inputted %d pounds and %.2lf ounces\n", e,h);
    conversion1(&e,&g,&h,&i);   // Converates from us weight to metric
    printInfo1(g,i);    // Prints us weight to metric
}

// Function to convert weight to US system
void weight_to_us()
{
    printf("Weight to US\n");
}

// Inputs feet and inches
void inputNum(int *number, double *number2)
{
    printf("Please enter the number of feet: ");
    // Used to read in number
    scanf("%d", &*number);
    fflush(stdin);
    
    // Error checks number is positive
    while (*number <0)
    {
        // Asks the user to reinput positive number
        printf("I'm sorry that number  is not positive: ");
        // Used to read in number
        scanf("%d", &*number);
        fflush(stdin);
    }
    
    printf("Please enter the number of inches: ");
    // Used to read in inches
    scanf("%lf", &*number2);
    fflush(stdin);
    
    // Error checks number is positive
    while (*number2 <=0 || *number2 >=12)
    {
        // Asks the user to reinput positive number
        printf("I'm sorry that number is not in range [1,12]: ");
        // Used to read in number
        scanf("%lf", &*number2);
        fflush(stdin);
    }
    return;
}

// Converates us length to metric
void conversion(int *number, double *number1, double *number2, int *total)
{
    *number1 = (*number2/12.00)+*number;    // Converts inches to feet and adds together
    *total= *number1 * 0.3048;      // Multiple by the amount of meters in a foot
    *number1= *number1 * 0.3048;    // Multiple by the amount of meters in a foot
    *number1 = (*number1-*total)*100; // Calculates the amount of centimeters
}

// Outputs us length to metric
void printInfo(double number1, int total)
{
    printf("This converts to %d meters and %.2lf centimeters.", total,number1);
}

// Inputs pounds
void inputPounds(int *pound, double *ounce)
{
    printf("Please enter the number of pounds: ");
    // Used to read in pounds
    scanf("%d", &*pound);
    fflush(stdin);
    
    // Error checks number is positive
    while (*pound <0)
    {
        // Asks the user to reinput positive number
        printf("I'm sorry that number  is not positive: ");
        // Used to read in number
        scanf("%d", &*pound);
        fflush(stdin);
    }
    
    printf("Please enter the number of ounces: ");
    // Used to read in ounces
    scanf("%lf", &*ounce);
    fflush(stdin);
    
    // Error checks number is positive
    while (*ounce <0 || *ounce >=16)
    {
        // Asks the user to reinput positive number
        printf("I'm sorry that number is not in range [0,16]: ");
        // Used to read in number
        scanf("%lf", &*ounce);
        fflush(stdin);
    }
    return;
}

// Converates us weight to metric
void conversion1(int *pound, double *pound1, double *ounce, int *ans)
{
    *pound1 = (*ounce/16.00)+*pound;    // Converates to pounds
    *ans= *pound1 / 2.2046; // Amount of pounds in kilogram
    *pound1= *pound1 / 2.2046; // Amount of pounds in kilogram
    *pound1 = (*pound1-*ans)*1000; // Calculates the amount of grams
}

// Outputs US weight to metric
void printInfo1(double pound1, int ans)
{
    printf("This converts to %d kilograms and %.2lf grams.\n", ans,pound1);
}
