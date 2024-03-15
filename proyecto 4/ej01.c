#include <assert.h>
#include <stdio.h>

// ejercicio 6d del proyecto anterior (saludos.c)
void imprimir_hola () {
    printf("hola\n");
}


void hola_hasta (int n) {
    while (n > 0) {
        imprimir_hola();
        n--;
    }
}


int main () {
    int n;

    // Pido al usuario la cantidad de veces que vamos a imprimir hola
    printf("Cuantas veces imprimimos hola?: ");
    scanf("%d", &n);

    // compruebo que n > 0
    assert(n > 0);

    // Ejecuto la funcion para imprimir la cantidad de holas solicitada
    hola_hasta(n);

    return 0;
}