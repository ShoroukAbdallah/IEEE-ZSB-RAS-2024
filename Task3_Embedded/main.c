#include <stdio.h>
#include <stdlib.h>

//--------------------------------------------Assignment_1------------------------------------
//------------------------"simple calculator"-------------------------------------------------


float add(float a, float b)
 {
    return a + b;
 }

float sub(float a, float b)
 {
    return a - b;
 }

float mult(float a, float b)
 {
    return a * b;
 }

float _div(float a, float b)
 {
    if (b == 0) {
        printf("Division by zero\n");
        return 0;
    }
    return a / b;
 }

float (*operation)(float, float);




int main()
 {
    float num1, num2, result;
    char choice;

    while (1)
    {
        printf("\nCalculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                operation = add;
                break;
            case '2':
                operation = sub;
                break;
            case '3':
                operation = mult;
                break;
            case '4':
                operation = _div;
                break;
            case '5':
                printf("Exiting\n");
                return 0;
            default:
                printf("Invalid choice\n");
                continue;
        }

        printf("Enter the first number ");
        scanf("%f", &num1);
        printf("Enter the second number ");
        scanf("%f", &num2);
        result = operation(num1, num2);
        printf("Result: %.2f\n", result);
    }

    return 0;
}




//----------Another solution using array of function pointer------------------------------------

float add(float a, float b)
 {
    return a + b;
 }

float sub(float a, float b)
 {
    return a - b;
 }

float mult(float a, float b)
 {
    return a * b;
 }

float _div(float a, float b)
 {
    if (b == 0) {
        printf("Division by zero\n");
        return 0;
    }
    return a / b;
 }


float (*operation[4])(float, float)={add, sub, mult, _div};

int main()
 {
    float num1, num2, result;
    int choice;

    while(1)
        {

        printf("\nCalculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf(" %d", &choice);

        if (choice==5)
            {
                printf("Exiting\n");
                exit(1);
            }
        else if(choice <0 || choice >6)
            {
               printf("Invalid choice\n");
               continue;
            }
        else
            {
                printf("Enter the first number ");
                scanf("%f", &num1);
                printf("Enter the second number ");
                scanf("%f", &num2);
                result = operation[choice-1](num1, num2);
                printf("Result: %.2f\n", result);
            }
        }
    return 0;
}





//---------------------------------------------Assignment_2-------------------------------------
//---------------------------------------------problem_1-------------------------------------

#define add(num1, num2) num1 + num2
#define sub(num1, num2) num1 - num2
#define mult(num1, num2) num1 * num2
#define _div(num1, num2) num1 / num2
int main()
 {
    float num1, num2, result;
    char choice;

    while (1)
    {
        printf("\nCalculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("\nEnter the first number ");
        scanf("%f", &num1);
        printf("Enter the second number ");
        scanf("%f", &num2);
        printf("\nEnter your choice for numbers: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case '2':
                result = sub(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case '3':
                result = mult(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case '4':
                result = _div(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case '5':
                printf("Exiting\n");
                return 0;
            default:
                printf("Invalid choice\n");
                continue;
        }

    }

    return 0;
}



//---------------------------------------------problem_2-------------------------------------
//The Difference between normal if and #ifdef


// if as condition true or false like example:
int main()
{
int num = 2;
if (num > 0) {
  printf("number is positive\n");
} else {
  printf("number is negative\n");
}
}



//  #ifdef

#define degree 80
int main(){
    #if degree ==50
    printf("success\n");
    #elif degree < 50
    printf("Fail\n");
    #else
    printf("Excellet\n");
    #endif
    return 0;
}
















