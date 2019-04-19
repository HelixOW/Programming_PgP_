#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *concat(char *str1, char *str2) {
    char *concated = malloc(strlen(str1) + strlen(str2) + 1);
    size_t i = 0;

    while (*str1 != '\0') {
        concated[i] = *str1;
        str1++;
        i++;
    }

    while (*str2 != '\0') {
        concated[i] = *str2;
        str2++;
        i++;
    }

    concated[i] = '\0';

    char *val = concated;
    free(concated);
    return val;
}

int main() {
    printf("%s", concat("Hello", " World!"));
    return 0;
}