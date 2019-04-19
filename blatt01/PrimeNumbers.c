#include <math.h>
#include <stdio.h>

int is_prime(int num) {
    if (num <= 1 || (num % 2 == 0 && num != 2)) return 0;

    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int calculate_nth_prime_number(int n) {
    int counter = 0;

    for (int i = 2;; i++) {
        if (is_prime(i) == 1)
            counter++;

        if (counter == n)
            return i;
    }
}

int main() {
    /*printf("%d\n", is_prime(1));
    printf("%d\n", is_prime(2));
    printf("%d\n", is_prime(3));
    printf("%d\n", is_prime(9));
    printf("%d\n\n", is_prime(11));

    printf("%d\n", calculate_nth_prime_number(1));
    printf("%d\n", calculate_nth_prime_number(2));
    printf("%d\n", calculate_nth_prime_number(3));
    printf("%d\n", calculate_nth_prime_number(10));*/


    for (int i = 1; i < 27; i++)
        printf("Die %i. Primzahl ist: %i\n", i, calculate_nth_prime_number(i));

    return 0;
}
