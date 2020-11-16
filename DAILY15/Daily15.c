// Include Directives
#include <stdio.h>
#include <stdlib.h>

/*
    Function to merge numbers1 and numbers2 text files and output
    to output text files
*/
int merge(FILE *point1,FILE *pointer2,FILE *output);

// Main Function
int main()
{
    // Opens numbers1 and numbers 2 text files
    FILE *fp1 = fopen(fileLoc1, "r");
    FILE *fp2 = fopen(fileLoc2, "r");
  
    // Open output text file to store the results
    FILE *fp3 = fopen(fileLoc3, "w");
    
    // Merges two numbers text files into an output text file
    merge(fp1,fp2,fp3);
    
    // Closes all three text files
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}

/*
    PRECONDITION: Function accepts three file pointers
    POSTCONDITION: Text files compared making an ascending list in the                  output text file.
*/
int merge(FILE *point1,FILE *point2,FILE *output)
{
    int a,b;    // Declares integers a and b
    
    // If files cannot be excessed
    if (point1 == NULL || point2 == NULL || output == NULL)
    {
        printf("Could not open files");
        exit(-1);
    }
      
    // Scans first integers of numbers text files
    fscanf(point1,"%d",&a);
    fscanf(point2,"%d",&b);
    
    if ((feof(point1))&&(feof(point2)))
    {
        fprintf(output,"Both Files are empty!\n");
        exit(-1);
    }
    
    // While neither file has reached its end
    while (!feof(point1) && !feof(point2))
    {
        // If number1 text file number is greater than numbers2
        if (a<b)
        {
            fprintf(output,"%d\n", a);
            fscanf(point1,"%d",&a); // Scans next integer
        }
        // If number2 text file number is greater than or equal to numbers1
        else
        {
            fprintf(output,"%d\n", b);
            fscanf(point2,"%d",&b); // Scans next integer
        }
    }

    // If end of file 2 is reached
    if (!feof(point1))
    {
        // While loop prints rest of integers of file 1
        while (!feof(point1))
        {
            fprintf(output,"%d\n",a);   // Prints a
            fscanf (point1, "%d", &a);  // Reads file 1 integer
        }
    }
    
    // If end of file 1 is reached
    else if (!feof(point2))
    {
        // While loop prints rest of integers of file 2
        while (!feof(point2))
        {
            fprintf(output,"%d\n",b);   // Prints b
            fscanf (point2, "%d", &b);  // Read file 2 integer
        }
    }
    return 0;
}
