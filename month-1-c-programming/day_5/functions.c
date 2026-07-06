#include <stdio.h>
#include <stdlib.h>

void sayHi();


int main() {


    sayHi("Mike", 40);
    sayHi("Lucas", 18);
    sayHi("Test", 12);


    return 0;
}

void sayHi(char name[], int age) {
    printf("Hello %s, you are %d\n", name, age);
}