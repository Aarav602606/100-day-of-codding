#include <stdio.h>

int main() 
{
    int i, j;
    int rows = 5; 
    int columns = 5; 
    for(i = 1; i <= rows; i++) 
    {
        for(j = 1; j <= columns; j++) 
        {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}

