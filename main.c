#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Hello, World!\n");
    printf("This is a little console application.\n");
    printf("For now, you can choose what you want to do!\n");
    printf("1 to the calculator\n");
    printf("2 to the Fibonacci\n");
    printf("3 to print all the odd numbers between 0 and the limit \n");
    printf("4 to print 10 random number between the the limit numbers \n");
    printf("Selected: ");
    int selectedNumber, limit;
    scanf("%d", &selectedNumber);

    /* function returning the two number calculator */
    void calculator() {
        double firstNumber, secondNumber, product;
        printf("Enter the first numbers: ");
        // Stores the first number
        scanf("%lf", &firstNumber);
        printf("Enter the second numbers: ");
        // Store the second number
        scanf("%lf", &secondNumber);

        // Performs multiplication and stores the result in variable productOfTwoNumbers
        product = firstNumber * secondNumber;

        // Result up to 2 decimal point is displayed using %.2lf
        printf("Product = %.2lf", product);
    }

    /* function returning the Fibonacci series */
    void fibonacci() {
        int i, n, t1 = 0, t2 = 1, nextTerm;

        printf("Enter the number of terms: ");
        scanf("%d", &n);

        printf("Fibonacci Series: ");

        for (i = 1; i <= n; ++i) {
            printf("%d, ", t1);
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
    }

    void odd(int limit) {
        int x;
        for (x = 0; x < limit; x++) {
            if (x % 2)
                printf("%d is odd\n", x);
        }

    }

    int randomNumber(int n) {

        int i, firstNumber, secondNumber, maxValue;
        printf("Enter the minimum value: ");
        // Stores the first number
        scanf("%d", &firstNumber);
        printf("Enter the maximum value: ");
        // Store the second number
        scanf("%d", &secondNumber);

        maxValue = secondNumber - firstNumber;

        time_t t;

        /* Intializes random number generator */
        srand((unsigned) time(&t));

        /* Print random numbers*/
        for (i = 0; i < n; i++) {
            printf("%d\n", rand() % maxValue + firstNumber);
        }
    }

    void reverser() {
        int reverse[5] = {1, 2, 3, 4, 5};

        printf("In order:\n");

        for (int i = 0; i < 5; i++) {
            printf("%d ", reverse[i]);
        }

        printf("\nResverse:\n");

        for (int i = 4; i >= 0; i--) {
            printf("%d ", reverse[i]);
        }
    }


    switch (selectedNumber) {
        case 1 :
            calculator();
            break; /* optional */

        case 2  :
            fibonacci();
            break; /* optional */

        case 3 :
            printf("Enter the limit: ");
            scanf("%d", &limit);
            odd(limit);
            break; /* optional */

        case 4:
            randomNumber(10);
            break;

        case 5:
            reverser();
            break;

            /* you can have any number of case statements */

        default : /* Optional */
            printf("Not a valid input.");
    }

    return 0;
}