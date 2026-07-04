#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int IB = 1000;
    int D = 500;
    int W = 200;
    int T = (IB + D) - W;

    printf("Initial Balance: €");
    printf("%d,\n", IB);

    printf("Deposit: +€");
    printf("%d,\n", D);

    printf("Withdrawal: -€");
    printf("%d,\n", W);

    printf("Final Balance: €");
    printf("%d,\n", T);

    return 0;
}