#include <stdio.h>

int main() {
    // Person 1
    int balance1 = 1000;
    int deposit1 = 500;
    int withdrawal1 = 200;
    int final1 = balance1 + deposit1 - withdrawal1;

    // Person 2
    int balance2 = 2000;
    int deposit2 = 300;
    int withdrawal2 = 100;
    int final2 = balance2 + deposit2 - withdrawal2;

    // Print both
    printf("Person 1 Final Balance: $%d\n", final1);
    printf("Person 2 Final Balance: $%d\n", final2);

    return 0;
}