#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE sizeof alphabet / sizeof alphabet[0]

typedef struct {
    char key;
    int val;
} PrimedChar;

PrimedChar alphabet[] = {
        {.key = 'a', .val = 2},
        {.key = 'b', .val = 3},
        {.key = 'c', .val = 5},
        {.key = 'd', .val = 7},
        {.key = 'e', .val = 11},
        {.key = 'f', .val = 13},
        {.key = 'g', .val = 17},
        {.key = 'h', .val = 19},
        {.key = 'i', .val = 23},
        {.key = 'j', .val = 29},
        {.key = 'k', .val = 31},
        {.key = 'l', .val = 37},
        {.key = 'm', .val = 41},
        {.key = 'n', .val = 43},
        {.key = 'o', .val = 47},
        {.key = 'p', .val = 53},
        {.key = 'q', .val = 59},
        {.key = 'r', .val = 61},
        {.key = 's', .val = 67},
        {.key = 't', .val = 71},
        {.key = 'u', .val = 73},
        {.key = 'v', .val = 79},
        {.key = 'w', .val = 83},
        {.key = 'x', .val = 89},
        {.key = 'y', .val = 97},
        {.key = 'z', .val = 101},
};

int get_prime_char_value(char c) {
    for (int i = 0; i < SIZE; i++) {
        if (alphabet[i].key == c)
            return alphabet[i].val;
    }

    return 0;
}

int get_prime_value(char *word) {
    int val = 0;

    for (int i = 0; i < strlen(word); i++)
        val += get_prime_char_value(tolower(word[i]));

    return val;
}

int is_anagram(char *word, char *compared) {
    return get_prime_value(word) == get_prime_value(compared);
}

int main() {
    printf("'Lampe' und 'Palme' ist ein Anagram? %i\n", is_anagram("Lampe", "Palme"));
    printf("'Venus in Beton' und 'Subventionen' ist ein Anagram? %i\n", is_anagram("Venus in Beton", "Subventionen"));

    printf("%d\n", is_anagram("mehl", "helm"));
    printf("%d\n", is_anagram("boeing", "airbus"));
    return EXIT_SUCCESS;
}
