#include <stdio.h>

/*
 *
 *   Height = 4
 *
 *       *
 *      ***
 *     *****
 *    *******
 *       *
 */

void print_tree_char(int height, char sym) {
    int i, j, k;

    for (i = 1; i <= height; i++) {
        for (j = height - 1; j >= i; j--) {
            printf(" ");
        }

        for (k = 1; k <= (2 * i - 1); k++) {
            printf("%c", sym);
        }
        printf("\n");
    }

    for(int a = 0; a < j; a++) {
        printf(" ");
    }

    printf("%c", sym);

}

void print_tree(int height) {
    print_tree_char(height, '*');
}

int main(void) {
//    print_tree(4);
//    print_tree(2);
//    print_tree(3);
//    print_tree(4);
//    print_tree(10);
//    print_tree_char(10, '+');
    print_tree_char(10, 'o');
}
