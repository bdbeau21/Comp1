// Include Directives
#include <stdio.h>

// Function Declaration or Prototype
void loop_down_to_zero(int num);
void loop_up_to_int(int num);

// Main Program
int main(int argc, const char * argv[]) {
    int num; // interger declaration
    // Input number
    printf("Please enter a positive integer: ");
    scanf("%d",&num);
    // Call to loop down function
    loop_down_to_zero(num);
    printf("****\n");
    // Call to loop up function
    loop_up_to_int(num);
    return 0;
}

// Function uses while loop to count down from inputted number
void loop_down_to_zero(num)
{
    // While loop runs until zero is reached.
    while (num >= 0)
    {
        printf("%d\n", num);
        num = num -1 ; // increases output by 1
    }
}

// Function uses while loop to count up to number
void loop_up_to_int(num)
{
    int i = 0; // counter variable i
    // while loop runs up to inputted number
    while (i <= num)
    {
        printf("%d\n", i);
         i= i+1; // Increases output by 1
    }
}
