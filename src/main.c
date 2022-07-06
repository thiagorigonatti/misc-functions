#include "headers/stob.h"
#include "headers/btos.h"

int main() {

    unsigned char c[2048];

    stob("Made by Thiago Rigonatti", c);

    printf("%s", c);

    int length;
    for (length = 0; c[length] != 0; ++length) {}

    unsigned char string[length / 8];

    btos(c, string, length);

    printf("\n%s", string);
}