#include "headers/stob.h"
#include "headers/btos.h"

int main() {

    unsigned char c[2048];

    stob("Thiago Silva", c);

    int length;
    for (length = 0; c[length] != 0; ++length) {}

    unsigned char string[length / 8];

    btos(c, string, length);

    printf("String: %s\n", string);
    printf("Binary: %s", c);
}