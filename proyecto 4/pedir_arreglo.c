#include <stdio.h>


void pedir_arreglo (int n_max, int a[]) {
    int posicion = 0;

    while (posicion < n_max) {
        printf("Introduzca el valor de la posicion %d del arreglo: ", posicion);
        scanf("%d", &a[posicion]);
        posicion++;
    }
}


void imprimir_arreglo (int n_max, int a[]) {
    int posicion = 0;

    printf("[");

    // imprimo el primer elemento hasta el ante ultimo para emprolijar el resultado que sale por consola
    while (posicion < n_max - 1) {
        printf("%d, ", a[posicion]);
        posicion++;
    }

    printf("%d]\n", a[posicion]);
}


int main () {
    int largo;

    // pido el tamaño del arreglo
    printf ("Introduce el largo del arreglo: ");
    scanf("%d", &largo);

    int a[largo];

    // pido los valores del arreglo
    pedir_arreglo(largo, a);

    // imprimo el arreglo
    imprimir_arreglo(largo, a);

    return 0;
}