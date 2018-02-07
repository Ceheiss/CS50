// This build mario bros pyramids
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Had to declare the variable because of scopes (to use it anywhere). This is inside main scope
    int hashCount = 1;
    int n;

    // Prompt user for positive number between 0 and 23
    do
    {
        n = get_int("Height: ");
    }
    while (n < 0 || n > 23);

    // Declare variable for spaces
    int spaceCount = n - hashCount;

    // Loop of every line. In each iteration there is one less space and one more hash
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < spaceCount; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < hashCount; k++)
        {
            printf("#");
        }
        // Middle of the pyramid and reverse order
        printf("  ");
        for (int k = 0; k < hashCount; k++)
        {
            printf("#");
        }
        spaceCount--;
        hashCount++;
        printf("\n");
    }
}

