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

    // Print that many bricks
    for (int i = 0; i < n; i++)
    {
        printf("#\n");
    }
}