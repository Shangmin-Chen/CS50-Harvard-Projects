#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int Initial_pop;
    do
    {
        Initial_pop = get_int("Initial population: ");
    }
    while (Initial_pop < 9);
    // TODO: Prompt for end size
    int End_pop;
    do
    {
        End_pop = get_int("End population: ");
    }
    while (End_pop < Initial_pop);
    // TODO: Calculate number of years until we reach threshold
    int n = 0;
    int new_pop = Initial_pop;
    while (true)
    {
        if (new_pop == End_pop && n == 0)
        {
            break;
        }
        n++;
        
        new_pop = (new_pop + (new_pop / 3) - (new_pop / 4));
            
        if (new_pop >= End_pop)
        {
            break;
        }
    }
    // TODO: Print number of years

    printf("Years: %i\n", n);
}