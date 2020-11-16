// Include directives
#include <stdio.h>

// Enum datatype choice
typedef enum choice{Rock=1,Paper,Scissors} Choice;

// Function section
Choice getPlayerChoice(void);       // Function returns player choice of weapon
void comparison (Choice player1, Choice player2);   // Compares player1 weapon to player2
char runProgram(void);              // Function to run program again

// Main Program
int main(int argc, const char * argv[])
{
    char run;   // Variable to run program again
    // Do while loop to run the program again
    do
    {
        // Asks user for player1 and player2 inputs
        printf("Player-1 it is your turn!\n");
        Choice player1 = getPlayerChoice();
        printf("Player-2 it is your turn!\n");
        Choice player2 = getPlayerChoice();
        
        // Call to comparing function
        comparison(player1,player2);
        
        // Call to function to run program again
        run = runProgram();
    }
    // User's choice is yes
    while (run =='y' || run == 'Y');
    return 0;
}

Choice getPlayerChoice()
{
    fflush(stdin);      // Clear buffer
    char player = ' ';  // Char player
    
    // Input section for players
    printf("Please enter your choice (p)aper, (r)ock, and (s)cissors: ");
    scanf("%c", &player);
    
    // Checks the value inoutted by user
    while (player != 'p'&& player != 'r'&& player != 's'&& player != 'P'&& player != 'R'&& player != 'S')
    {
        fflush(stdin);  // Clears buffer
        
        // Re-input value
        printf("I'm sorry I don't understand.\nPlease enter your choice (p)aper, (r)ock, and (s)cissors: ");
        scanf("%c",&player);
    }
    
    // If player choice is rock
    if (player == 'r' || player == 'R')
    {
        // Return player choice Rock
        return player = Rock;
    }
    // If player choice is Paper
    else if(player == 'p' || player == 'P')
    {
        // Return player choice is paper
        return player = Paper;
    }
    // If player choice is scissors
    else if (player == 's' || player == 'S')
    {
        // Return player choice is scissors
        return player = Scissors;
    }
    return player;
}

// Function to compare player1 and player2 values
void comparison (Choice player1, Choice player2)
{
    // Switch statement to compare
    switch(player1){
        // Player1 equals rock
        case 1:
            // Player2 equals rock
            if(player2 ==1)
            {
                // Draw
                printf("Draw, nobody wins.\n");
                break;
            }
            // Player2 equals paper
            else if (player2 == 2)
            {
                // Player2 wins
                printf("Player-2 wins! Paper covers rock.\n");
                break;
            }
            // Player2 equals scissors
            else if (player2 == 3)
            {
                // Player1 wins
                printf("Player-1 wins. Rock breaks scissors.\n");
                break;
            }
        // Player1 equals paper
        case 2:
            // Player2 equals rock
            if(player2 ==1)
            {
                // Player1 wins
                printf("Player-1 wins! Paper covers rock.\n");
                break;
            }
            // Player2 equals paper
            else if (player2 == 2)
            {
                // Draw
                printf("Draw, nobody wins.\n");
                break;
            }
            // Player2 equals scissors
            else if (player2 == 3)
            {
                // Player2 wins
                printf("Player-2 wins! Scissors cuts Paper.\n");
                break;
            }
        // Player1 equals scissors
        case 3:
            // Player2 equals rock
            if(player2 ==1)
            {
                // Player2 wins
                printf("Player-2 wins! Rock breaks scissors.\n");
                break;
            }
            // Player2 equals paper
            else if (player2 == 2)
            {
                // Player1 wins
                printf("Player-1 wins! Scissors cuts paper\n");
                break;
            }
            // Player2 equals scissors
            else if (player2 == 3)
            {
                // Draw
                printf("Draw, nobody wins.\n");
                break;
            }
        // Default case
        default:
            // Should never be accessed
            printf("Yikes something went wrong!\n");
            break;
    }
}

// Function to run program again
char runProgram()
{
    char reRun;     // Used for input
    fflush(stdin);  // Clears buffer
    // Asks user for input
    printf("Do you wish to continue? (y/n): ");
    scanf("%c", &reRun);
    
    // Char inputted must be Y or N
    while (reRun != 'y' && reRun != 'Y' && reRun != 'n' && reRun != 'N')
    {
        fflush(stdin);  // Clears buffer
        // Re-input char
        printf("I'm sorry character is not Y or N\nDo you wish to continue? (y/n): ");
        scanf("%c",&reRun);
    }
    return reRun;
}
