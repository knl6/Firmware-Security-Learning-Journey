#include <stdio.h>

int main(void) {

    char characterName [] = "John";
    int characterAge = 35;

    //      For char and int specifically:
    //      char (single character storage):
    //
    //      %c = print as character (most common)
    //      %d = print as number (0-255)
    //
    //      int (number storage):
    //
    //      %d = print as decimal number (most common)
    //      %x = print as hexadecimal
    //      %o = print as octal (rare)


    printf("There once was a man named %d\n", characterName);
    printf("he was %d years old\n",characterAge );
    printf("he really liked the name %s\n",characterName);
    printf("but he did not like being %x\n", characterAge);
    return 0;
}

