//
// Created by edte on 8/23/20.
//

#include <stdlib.h>

// string copy
char *strcpy(char *dest, char *src) {
    if (dest == NULL || src == NULL) {
        return NULL;
    }

    // i is index
    for (int i = 0; src[i] != '\0'; i++) {
        // memory copy
        dest[i] = src[i];
        // i increment
    }

    return dest;
}

// string copy length n
int strncpy(char *dest, char *src, int n) {
    if (dest == NULL || src == NULL || n <= 0) {
        return NULL;
    }

    // i is index
    for (int i = 0; i < n; i++) {
        // memory copy
        dest[i] = src[i];
        // i increment
    }

    dest[n] = '\0';

    return dest;
}