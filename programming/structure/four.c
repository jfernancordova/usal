#include <stdio.h>
#include <string.h>

int main() {

    struct maintenance {
        long int cambio_de_aceite;
        long int bujias;
        long int filtro_de_aire;
    };

    struct car {
        char maker[15];
        char model[15];
        struct maintenance automovil;
    };

    struct car mycar;

    strcpy(mycar.maker, "Peugeot");
    mycar.automovil.cambio_de_aceite = 10000;

    printf("maker: %s\n", mycar.maker);
    printf("Cambio de aceite: %ld\n", mycar.automovil.cambio_de_aceite);

    return 0;
}