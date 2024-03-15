#include <stdbool.h>
#include <stdio.h>


bool pedir_booleano (char name) {
    int b;

    printf("Ingresar un booleano para la variable %c: ", name);
    scanf("%d", &b);

    return b;
}


void imprimimr_booleano (char name, bool x) {
    if (x == 0) {
        printf("%c = falso\n", name);
    } else {
        printf("%c = veradero\n", name);
    }
}


int main () {
    char name = 'b';

    bool b = pedir_booleano(name);
    imprimimr_booleano(name, b);

    return 0;
}