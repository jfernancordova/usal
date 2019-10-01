#include <stdio.h>

int hace_algo(char *s);

int main() {
    char s[100] = "en la casa de pinocho";
    int retorno;

    retorno = hace_#include <stdio.h>

int hace_algo(char *s);

int main()
{
    char s[100]="en la casa de pinocho";
    int retorno;

    retorno=hace_algo(s);

    printf("Retorno vale: %d", retorno);

    return 0;
}

int hace_algo(char *s)
{
    int sum=0;
    for(;;)
    {
        switch(*s++)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                sum++;
                continue;


            default: 	continue;
            case '\0':	break;
        }
        break; //sacar al ppio
    }
    return(sum);
}algo(s);

    printf("Retorno vale: %d", retorno);

    return 0;
}

int hace_algo(char *s) {
    int sum = 0;
    for (;;) {
        switch (*s++) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                sum++;
                continue;


            default:
                continue;
            case '\0':
                break;
        }
        break; //sacar al ppio
    }
    return (sum);
}