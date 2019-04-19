#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef char type_t;

typedef struct {
    type_t *li;
    size_t len;
    size_t alloc;
} dyn_array_t;

void init_array(dyn_array_t *array, int desSize) {
    array->li = malloc(desSize * sizeof(char));
    array->len = 0;
    array->alloc = desSize;
}

int grow(dyn_array_t *array) {
    assert(array != NULL);
    assert(array->li != NULL);
    type_t *newLi = malloc(2 * array->alloc);
    if (newLi == NULL)
        return 0;

    memcpy(newLi, array->li, sizeof(type_t) * array->len);
    free(array->li);
    array->li = newLi;
    array->alloc *= 2;

    return 1;
}

type_t insert(dyn_array_t *array, char ele) {
    if (array->len > array->alloc - 1) {
        assert(grow(array) != 0);
    }
    array->li[array->len++] = ele;
    return ele;
}

//Zusatz
void destroy_array(dyn_array_t *array) {
    free(array->li);
    free(array);
}