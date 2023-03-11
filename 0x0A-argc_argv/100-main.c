#include <stdio.h>
#include <stdlib.h>

int count_coin(int cents);

int main(int argc, char *argv[]) {
    int cents;
    printf("Enter the amount of cents: ");
    scanf("%d", &cents); // read user input
    int num_coins = count_coin(cents); // call the count_coin function
    printf("%d\n", num_coins); // print the minimum number of coins and a newline
    return 0;
}

