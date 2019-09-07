#include <stdio.h>

int main() {
    char status_water1[4];  //gas
    char status_water2[7];  //solido
    char status_water3[8] = "liquido";  //liquido

    status_water1[0] = 'g';
    status_water1[1] = 'a';
    status_water1[2] = 's';
    status_water1[3] = '\0';

    printf("\n\n\t Please insert the status water --> solido: ");
    scanf("%s", status_water2);

    printf("%s\n", status_water1);
    printf("%s\n", status_water2);
    printf("%s\n", status_water3);

    return 0;
}