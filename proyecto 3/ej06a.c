#include <stdio.h>


int pedir_entero (char name) {
    int x;

    printf ("Ingresa un valor para la variable %c: ", name);
    scanf ("%d", &x);

    return x;
}

void imprimir_entero (char name, int x) {
    printf ("El valor ingresado para la variable %c es: %d\n", name, x);
}

int main () {
    char name = 'n';
    
    int x = pedir_entero(name);
    imprimir_entero(name, x);

    return 0;
}