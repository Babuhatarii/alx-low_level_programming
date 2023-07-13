#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int validate_number(char *str) {
    while (*str != '\0') {
        if (!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}

int multiply_numbers(int num1, int num2) {
    return num1 * num2;
}

int main(int argc, char *argv[]) {
    int num1, num2, result;

    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!validate_number(argv[1]) || !validate_number(argv[2])) {
        printf("Error\n");
        return 98;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    result = multiply_numbers(num1, num2);

    printf("%d\n", result);

    return 0;
}

