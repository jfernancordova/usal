#include <stdio.h>

int main() {
    struct car {
        char maker[15];
        char model[15];
        char registration[20];
        int antiquity;
        long int mileage;
        float purchase_price;
    } mycar;

    printf("Insert maker: ");
    scanf("%s", mycar.maker);

    printf("Insert model: ");
    scanf("%s", mycar.model);

    printf("Insert registration: ");
    scanf("%s", mycar.registration);

    printf("Insert antiquity: ");
    scanf("%d", &mycar.antiquity);

    printf("Insert mileage: ");
    scanf("%ld", &mycar.mileage);

    printf("Insert purchase price: ");
    scanf("%f", &mycar.purchase_price);

    printf("\n\n\n");
    printf("A %s %s de %d, with registration number #%s\n", mycar.maker, mycar.model, mycar.antiquity,
           mycar.registration);
    printf("actually with %ld mileage and it was bought by $%5.2f", mycar.mileage, mycar.purchase_price);

    return 0;
}