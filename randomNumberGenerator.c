//Author :Joshua muthenya Wambua.
//date: 26/10/25

//random numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createRandomNumbers() {
    srand(time(0));  // Seed random number generator

    int a = rand() % 10;  // Random number between 0–9
    int b = rand() % 5;   // Random number between 0–4

    printf("A is %d\n", a);
    printf("B is %d\n", b);
}

int main() {
    createRandomNumbers();

    printf("\nThanks for visiting!\n");
    return 0;
}


