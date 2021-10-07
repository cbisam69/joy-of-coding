//Write a C program that displays the size of all possible data types in C
//USN 1rn20cs138
#include<stdio.h>
int main() {
    int int_type;
    float float_type;
    double double_type;
    char char_type;
    printf("Size of int: %d bytes\n", sizeof(int_type));
    printf("Size of float: %d bytes\n", sizeof(float_type));
    printf("Size of double: %d bytes\n", sizeof(double_type));
    printf("Size of char: %d byte\n", sizeof(char_type));
    
    return 0;
}