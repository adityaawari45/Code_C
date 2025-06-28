#include <stdio.h>
#include <math.h>

double division(double, double);
double modulus(int, int);
void print_menu();

int main()
{
    int choice;
    double first, second, result;

    while(1){

        print_menu();
        scanf("%d", &choice);

        if(choice == 7){
            break;
        }

        if(choice < 1 || choice > 7)
        {
            fprintf(stderr, "Invalid number entered.\nPlease enter the number within range.");
            continue;
        }

        printf("\nEnter the first number: ");
        scanf("%lf", &first);

        printf("Enter the second number: ");
        scanf("%lf", &second);

        switch(choice)
        {
            case 1:
                result = first + second;
                break;
            case 2:
                result = first - second;
                break;
            case 3:
                result = first * second;
                break;
            case 4:
                result = division(first, second);
                break;
            case 5:
                result = modulus((int)first, (int)second);  // cast to int
                if(result == -1) {
                    printf("Modulus error: division by zero.\n");
                    continue;
                }
                break;
            case 6:
                result = pow(first, second);
                break;
        }

        if(!isnan(result))
        {
        printf("\nThe result of the operation is %.2f", result);
        printf("\n");
        }

    }

    return 0;
}

void print_menu()
{
    printf("\n");
    printf("\n---------------------------------\n");
    printf("Welcome to Simple Calculator\n");
    printf("Choose one of the following:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
}

double division(double a, double b)
{
    if(b == 0){
        fprintf(stderr, "Division error: division by zero.\n");
        return NAN;
    } else {
        return a / b;
    }
}

double modulus(int y, int z)
{
    if(z == 0){
        fprintf(stderr, "Modulus error: division by zero.\n");
        return NAN;
    } else {
        return y % z;
    }
}
