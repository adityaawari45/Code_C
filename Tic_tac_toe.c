#include <stdio.h>
int difficulty;

int main()
{
    while (1) {
        printf("\nSelect difficulty level: ");
        printf("\n1. Human (standard)");
        printf("\n2. God (impossible to win)");
        printf("\nEnter your choice: ");
        scanf("%d", &difficulty);
        if (difficulty != 1 && difficulty != 2) {
          printf("Invalid choice. Enter (1/2)..");
        }
        else {
            break;
        }
    }
    return 0;
}