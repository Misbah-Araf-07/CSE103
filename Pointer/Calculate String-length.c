/*Write a function that calculates the length of a string using pointers (without using strlen()). Count characters until you reach the null terminator./*

#include <stdio.h>

int stringLength(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;  
    }
    return len;
}

int main() {
    char text[] = "Hello World";
    printf("Length of '%s' is %d\n", text, stringLength(text));
    return 0;
}
