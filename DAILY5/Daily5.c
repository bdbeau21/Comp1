// Include Section
#include <stdio.h>

// Function Declaration or Prototype
void recursive_down_to_zero(int num);
void recursive_up_to_int(int num);

int main(int argc, const char * argv[]) {
    recursive_down_to_zero(10);
    printf("****\n");
    recursive_up_to_int(0);
    return 0;
}

// Prints numbers down from 10 - 0
void recursive_down_to_zero(num){
    // Stops recursion after 0
    if (num == -1){
        return;
    }
    printf("%d \n", num);
    // Call back to function subtracts 1 to num
    recursive_down_to_zero(num - 1);
    return;
}

// Prints numbers up from 0 - 10
void recursive_up_to_int(int num){
    // Stops recursion after 10
    if (num == 11){
        return;
    }
    printf("%d \n", num);
    // Call back to function adds 1 to num
    recursive_up_to_int(num + 1);
    return;
}
