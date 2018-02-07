#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Had to declare the variable because of scopes (to use it anywhere). This is inside main scope
    int n;
    // Prompt user for positive number
    do
    {
        n = get_int("Positive number: ");
    }
    while (n <= 0);

    // Print this many rows
    for (int i = 0; i < n; i++)
    {
        // Print this many columns
        for(int j = 0; j < n; j++)
        {
        printf("#");
        }
        printf("\n");
    }
}