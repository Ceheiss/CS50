// Conditions and relational operators

#include <cs50.h>
#include <stdio.h>

int main(void) // When green flag clicked
{
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");

    // Compare x and y
    if (x < y)
    {
        printf("%i is less than %i\n", x, y); // Cambio para probar el uso de placeholders
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}