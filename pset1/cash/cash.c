// Greedy: Give as few coins as possible as change
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Declare variables for coins and counter
    float quarter = 25;
    float dime = 10;
    float nickel = 5;
    float penny = 1;
    int coinsUsed = 0;
    int newChange;
    float change;

    // Ask user input (positive number)
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);

    // Rounded because it fails with the floats
    change *= 100;
    newChange = round(change);

    // Now multiple loops to give change
    while ((newChange - quarter) >= 0)
    {
        coinsUsed++;
        newChange -= quarter;
    }

    while ((newChange - dime) >= 0)
    {
        coinsUsed++;
        newChange -= dime;
    }

    while ((newChange - nickel) >= 0)
    {
        coinsUsed++;
        newChange -= nickel;
    }

    while ((newChange - penny) >= 0)
    {
        coinsUsed++;
        newChange -= penny;
    }

    printf("%i\n", coinsUsed);
}