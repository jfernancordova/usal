#include <stdio.h>
#include <ctype.h>

//Prototype
char upperCase(char letter);

int main() {
    char lowerCaseLetter, upperCaseLetter;

    printf("Insert a lowercase letter: ");
    lowerCaseLetter = getchar();

    upperCaseLetter = upperCase(lowerCaseLetter);

    printf("The previous letter to upperCases es: %c\n", upperCaseLetter);

    return 0;

}

char upperCase(char letter) {
    return (toupper(letter));
}
