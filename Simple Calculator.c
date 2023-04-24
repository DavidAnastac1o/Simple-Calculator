#include <stdio.h>
#include <stdlib.h>

int main() {
    double result = 0.0;
    char operator;
    char c;
    double operand;
    int done = 0;

    while (!done) {
        system("clear || cls"); // clear terminal screen
        printf("Write every operation you need ( +, -, *, /)\n");
        printf("Result: \n%.2f ", result); // display current result

        // read in next operator or '='
        scanf(" %c", &operator);

        if (operator == '=') {
            // done with calculations
            done = 1;
        } else if (operator == 'c' || operator == 'C') {
            // clear result
            result = 0.0;
        } else {
            // read in next operand
            scanf("%lf", &operand);

            // perform appropriate operation
            switch (operator) {
                case '+':
                    result += operand;
                    break;
                case '-':
                    result -= operand;
                    break;
                case '*':
                    result *= operand;
                    break;
                case '/':
                    if (operand != 0.0) {
                        result /= operand;
                    } else {
                        printf("Error: division by zero!\n");
                        getchar(); // Wait for the user to press Enter
                        getchar(); // Wait for the user to press Enter
                    }
                    break;
                default:
                    printf("Error: unknown operator %c\n", operator);
                    getchar(); // Wait for the user to press Enter
                    getchar(); // Wait for the user to press Enter
                    break;
            }
        }
    }

    printf("Final result: %.2f\n", result);

    return 0;
}
