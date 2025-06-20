#include <stdio.h>

int main() {
    char string[100];
    char *ptr;
    int length = 0;


    printf("Enter any string: ");
    fgets(string, sizeof(str), stdin);

    
    ptr = string;

    
    while (*ptr != '\0') {
        if (*ptr != '\n')  // To ignore newline character from fgets
            length++;
        ptr++;
    }


    printf("The length of a string is: %d\n", length);

    return 0;
}
