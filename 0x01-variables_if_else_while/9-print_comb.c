#include <stdio.h>

int main() {
    int digit;

    for (digit = 0; digit < 10; digit++) {
        if (digit > 0) {
            putchar(',');
            putchar(' ');
        }
        putchar('0' + digit);
    }

    putchar('\n');

    return 0;
}

