#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get card number
    long card;
    card = get_long("Number: ");
    // getting a temp value for card
    long temp = card;
    long temp2 = card;

    // find how long the number is
    int len = 0;
    while (temp != 0)
    {
        temp = temp / 10;
        len++;
    }

    // establish variables
    int counter = 0, d = 0, sum = 0, check = 0;
    // even

    while (counter <= len)
    {
        if (d % 2 != 0) // digits that needs to * 2
        {
            check = 2 * (card % 10);
            if (check >= 10)
            {
                sum += (check % 10 + check / 10);
            }
            else
            {
                sum += 2 * (card % 10);
            }
        }
        
        else
        {
            sum += card % 10;
        }
        
        card = card / 10;
        d++;
        counter++;
    }
    // modulo the sum to check if its valid
    // get i for loop
    int i;
    if (sum % 10 == 0)
    {
        // now check what card it is
        for (i = 0; i <= (len - 3); i++)
        {
            temp2 = temp2 / 10; // were using temp 2 cuz card is no longer card
        }
        // yessir now we get first 2 number
        if (temp2 / 10 == 4) // check if its visa
        {
            if (len == 13 || len == 16)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        
        else if (temp2 == 34 || temp2 == 37) // check if its american express
        {
            if (len == 15)
            {
                printf("AMEX\n");
            }
        }
        
        else if (temp2 <= 55 && temp2 >= 51) // check if its master card
        {
            if (len == 16)
            {
                printf("MASTERCARD\n");
            }
        }
        else
        {
            printf("INVALID\n"); // everything else is just invalid
        }
    }
    
    else // not valid cuz modulo aint 0
    {
        printf("INVALID\n");
    }
}