//
// Created by edte on 8/23/20.
//

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

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

// Atoi convert string to int
int Atoi(char *a) {
    if (*a == NULL) {
        return 0;
    }

    int i = 0;
    int j = 0;
    long long result = 0;

    aa :
    if (*(a + i) == ' ') {
        i++;
        goto aa;
    }

    char *b = a + i;

    if (*b == '-' || *b == '+') {
        j++;
    } else if (*b >= '0' && *b <= '9') {

    } else {
        return result;
    }

    while (*(b + j) != '\0') {
        if (!(*(b + j) >= '0' && *(b + j) <= '9')) {
            break;
        }
        result = result * 10 + (*(b + j) - '0');
        j++;
    }

    if (*b == '-') {
        result = -result;
    }

    if ((int) result != result) {
        result = (*b == '-') ? (INT_MIN) : (INT_MAX);
    }

    return (int)result;
}