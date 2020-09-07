#include "./string/string.h"
#include <stdio.h>

int main(void) {
    printf("%d\n", Atoi("20000000000000000000"));
    printf("%d\n", Atoi("2002300000000000000000"));
    printf("%d\n", Atoi("-200232323423400000000000000000"));
    printf("%d\n", Atoi("200232323423400000000000000000"));
    printf("%d\n", Atoi("234"));
    printf("%d\n", Atoi("-234"));

    return 0;
}