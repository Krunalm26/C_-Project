#include <stdio.h>

int main() {

    for (int row = 5; row >= 1; row--) {
        for (int space = 1; space < row; space++) {
            printf(" ");
        }
        for (int col = row; col <= 5; col++) {
            printf("%d", col);
        }

        printf("\n");
    }

    return 0;
}
