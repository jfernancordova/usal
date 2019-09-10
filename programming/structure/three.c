#include <stdio.h>

#define MAX_CAR 2

int main() {
    int i;
    struct car {
        char maker[15];
        char model[15];
        char registration[20];
        int antiquity;
        long int mileage;
        float purchase_price;
    };

    struct car mycar[MAX_CAR], *pointer_mycar;

    pointer_mycar = &mycar[0];


    for (i = 0; i <= MAX_CAR - 1; i++) {
        fflush(stdin);  // Clean the keyboard buffer

        printf("Insert maker: ");
        gets(pointer_mycar->maker);

        printf("Insert model: ");
        gets(pointer_mycar->model);

        printf("Insert registration: ");
        gets(pointer_mycar->registration);

        printf("Insert antiquity: ");
        scanf("%d", &pointer_mycar->antiquity);

        printf("Insert mileage: ");
        scanf("%d", &pointer_mycar->mileage);

        printf("Insert purchase price: ");
        scanf("%f", &pointer_mycar->purchase_price);

        pointer_mycar++;
    }

    printf("\n\n\n");
    pointer_mycar = &mycar[0];
    for (i = 0; i <= MAX_CAR - 1; i++) {
        printf("A %s %s de %d, with registration number #%s\n", pointer_mycar->maker, pointer_mycar->model,
               pointer_mycar->antiquity, pointer_mycar->registration);
        printf("actually with %ld mileage and it was bought by $%5.2f", pointer_mycar->mileage,
               pointer_mycar->purchase_price);
        pointer_mycar++;
    }

    return 0;

}