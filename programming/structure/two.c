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

    struct car mycar[MAX_CAR];


    for (i = 0; i <= MAX_CAR - 1; i++) {

        fflush(stdin);  // Clean the keyboard buffer

        printf("Insert maker: ");
        scanf("%s", mycar[i].maker);

        printf("Insert model: ");
        scanf("%s", mycar[i].model);

        printf("Insert registration: ");
        scanf("%s", mycar[i].registration);

        printf("Insert antiquity: ");
        scanf("%d", &mycar[i].antiquity);

        printf("Insert mileage: ");
        scanf("%ld", &mycar[i].mileage);

        printf("Insert purchase price: ");
        scanf("%f", &mycar[i].purchase_price);
    }

    printf("\n\n\n");

    for (i = 0; i <= MAX_CAR - 1; i++) {
        printf("\n\n\n");
        printf("A %s %s de %d, with registration number #%s\n", mycar[i].maker, mycar[i].model, mycar[i].antiquity,
               mycar[i].registration);
        printf("actually with %ld mileage and it was bought by $%5.2f", mycar[i].mileage, mycar[i].purchase_price);
    }

    return 0;

}
