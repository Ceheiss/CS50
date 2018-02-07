#include <cs50.h>
#include <stdio.h>

int main(void){

    char c = get_char("Answer: ");

    if (c =='Y' || c == 'y'){ // C is case sensitive
        printf("yes\n");
    } else if (c == 'N' || c=='n') {
        printf("no\n");
    }
}