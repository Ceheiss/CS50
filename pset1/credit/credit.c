#include<cs50.h>
#include<stdio.h>

int main(void){

    int number = 1234567;
    int lastNumber = number % 10;
    int secondToLast = (number / 10) % 10;

    printf("lastNumber %i\n", lastNumber);
    printf("secondToLast %i\n", secondToLast);



}