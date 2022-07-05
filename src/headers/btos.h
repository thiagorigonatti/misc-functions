#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Converts from binary to char and store in str
unsigned char binTochar(const char *str) {
    unsigned char c = strtol(str, 0, 2);
    return c;
}

//Converts from binary to string and store in array_string
void btos(unsigned char *data, unsigned char *array_string, int index) {

    int data_size = index;
    index = 0;

    for (int i = 0; i < data_size; i += 8) {
        char sub_str[8];
        memcpy(sub_str, data + i, 8);
        array_string[index++] = binTochar(sub_str);
    }
}