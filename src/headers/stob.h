#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Converts from char to binary and store in binary_array
void charToBin(const char c, unsigned char *binary_arr, size_t *index) {
    for (int i = 7; i >= 0; --i) {
        binary_arr[*index] = ((c & (1 << i)) ? '1' : '0');
        (*index)++;
    }
}

//Converts from string to binary and store in binary_array
unsigned char *stringToBin(const char *str, unsigned char *binary_arr, size_t *index, const size_t size) {
    *index = 0;
    for (int i = 0; i < size; i++) {
        charToBin(str[i], binary_arr, index);
    }

    return binary_arr;
}

//String to binary, prints out the zeros and ones
unsigned char *stob(char string[2048], unsigned char *binary) {

    int length;
    for (length = 0; string[length] != 0; length++) {}

    unsigned char arr[length * 8];
    size_t index;

    memcpy(binary, stringToBin(string, arr, &index, length), length * 8);
    return binary;
}