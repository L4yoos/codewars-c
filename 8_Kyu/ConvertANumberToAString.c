// https://www.codewars.com/kata/5265326f5fda8eb1160004c8/train/c

/*
We need a function that can transform a number (integer) into a string.

What ways of achieving this do you know?

In C, return a dynamically allocated string that will be freed by the test suite.

Examples (input --> output):
123  --> "123"
999  --> "999"
-100 --> "-100"
*/

#include <stdio.h>
#include <stdlib.h>

char *number_to_string(int number) {
    char *bufor = malloc(12);
    if (bufor == NULL) {
        return NULL;
    }

    snprintf(bufor, 12, "%d", number);

    return bufor;
}