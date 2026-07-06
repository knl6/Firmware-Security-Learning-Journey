#include <stdio.h>

int main() {
    int initialBalance = 1000;
    int deposit = 500;
    int withdrawal = 200;
    int finalBalance = (initialBalance + deposit) - withdrawal;

    printf("Initial Balance: €%d\n", initialBalance);
    printf("Deposit: +€%d\n", deposit);
    printf("Withdrawal: -€%d\n", withdrawal);
    printf("Final Balance: €%d\n", finalBalance);

    return 0;
}