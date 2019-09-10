#include <stdio.h>

int main() {
    int j;
    char days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    for (j = 0; j <= 6; j++)
        printf("%s\n", days[j]);

    printf("%c", days[1][3]);

    return 0;
}