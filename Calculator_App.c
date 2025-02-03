#include <stdio.h>

void add();
void subtract();
void multiply();
void divide();

int main() {
    int choice;
    printf("Welcome Chaithu!!");
    while (1) {
        printf("\nSimple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                 subtract();
                 break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}

void add() {
    long num1, num2;
    printf("Enter two numbers: ");
    scanf("%ld %ld", &num1, &num2);
    printf("Result: %ld\n", num1 + num2);
}

void subtract() {
    long num1, num2;
    printf("Enter two numbers: ");
    scanf("%ld %ld", &num1, &num2);
    printf("Result: %ld\n", num1 - num2);
}

void multiply() {
    long num1, num2;
    printf("Enter two numbers: ");
    scanf("%ld %ld", &num1, &num2);
    printf("Result: %ld\n", num1 * num2);
}

void divide() {
    double num1, num2;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    if (num2 != 0)
        printf("Result: %.2lf\n", num1 / num2);
    else
        printf("Error! Division by zero is not allowed.\n");
}
