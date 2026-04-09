#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    
    printf("Simple Arithmetic Calculator\n");
    printf("============================\n\n");
    
    // Get the operator from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to handle newline
    
    // Get two numbers from the user
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    printf("\n");
    
    // Perform operation based on the operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '/':
            // Check for division by zero
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("Error! Invalid operator.\n");
            printf("Please use +, -, *, or /.\n");
            break;
    }
    
    return 0;
}
