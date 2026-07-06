#include <stdio.h>

int main() {
    char colour[20];
    char pluralnoun[20];
    char celebrity[20];

    printf("Enter your colour: ");
    scanf("%s",colour);

    printf("Enter your plural noun: ");
    scanf("%s",pluralnoun);

    printf("Enter your celebrity noun: ");
    scanf("%s",celebrity);

    printf("Roses are %s \n", colour);
    printf("%s are blue \n", pluralnoun);
    printf("I love %s \n", celebrity);

}