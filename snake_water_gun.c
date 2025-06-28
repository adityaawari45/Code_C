#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    srand(time(0));
    int player, computer = rand() % 3;

    
    /*0 -- snake
    1 - water
    2- gun*/
    printf("Enter: \n 0 for snake \n 1 for water \n 2 for Gun \n");
    printf("Let's start!!! \n");
    
    scanf("%d", &player);
    printf("%d \n", computer);
    
    int snake = 0;
    int water = 1;
    int gun = 2;

    if (player == 0 && computer == 1)
    {
        printf("You lose \n");
        
    }
    
    else if (player == 1 && computer == 0)
    {
        printf("You won! \n");
        
    }
    
    else if (player == 1 && computer == 1)
    {
        printf("Tied \n");
        
    }
    
    else if (player == 0 && computer == 0)
    {
        printf("Tied \n");
        
    }
    
    else if (player == 2 && computer == 0)
    {
        printf("You won! \n");
        
    }

    else if (player == 2 && computer ==1)
    {
        printf("You won! \n");
        
    }
    
    else if (player == 0 && computer == 2)
    {
        printf("You lose \n");
        
    }
    
    else if (player == 1 && computer == 2)
    {
        printf("You lose \n");
        
    }
    
    else if (player == 2 && computer == 2)
    {
        printf("Tied \n");
        
    }
    
    else
    {
        printf("Invalid input... \n");
        
    }
    
    
    return 0;
}