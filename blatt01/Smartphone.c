#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char* brand;
    char* model;
    char* color;
    int memory;
} smartphone_t;


void add_additional_sd_card(smartphone_t* phone) {
    phone->memory = phone->memory + 128;
}

void print_smartphone_configuration(smartphone_t phone) {
    printf("Your configuration:\n    Brand: %s\n    Model: %s\n    Color: %s\nTotal Memory: %dGB\n",
            phone.brand, phone.model, phone.color, phone.memory);
}

int main() {
    smartphone_t phone = {
            .brand = "Sumsang",
            .model = "Milkyway S3",
            .color = "black",
            .memory = 16,
    };

    print_smartphone_configuration(phone);
    add_additional_sd_card(&phone);
    print_smartphone_configuration(phone);

    return 0;
}
