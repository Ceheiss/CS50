#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Give me your name ");
    int age = get_int("How old are you? ");
    char initial = get_char("What is your last name initial? ");

    printf("Hello, Mr. %s.%c, I see you are %i years old... Nice to meet you\n", name, initial, age);
}
