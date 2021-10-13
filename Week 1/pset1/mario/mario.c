#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // getting input
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);
    
    // defining variables
    int i, j, b;
    
    // print pyramid
    
    for (i = 1; i <= h; i++)
    {
        // printing the left
        for (j = h; j > i; j--)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("#");
        }
        // printing them 2 spaces in the middle
        printf("  ");
        
        // printing the right
        for (j = 0; j < i; j++)
        {
            printf("#");
        }
        
        // printing new lien
        printf("\n");
    }
}