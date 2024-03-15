#include <stdio.h>


int sumatoria (int tam, int a[]) {
    int res = 0;

    for (int i = 0; i < tam; i++) {
        res += a[i];
    }

    return res;
}


int main () {
    int contador = 0;
    int tam;

    // pido al usuario el largo del arreglo
    printf("Introduzca el largo del arreglo: ");
    scanf("%d", &tam);

    int a[tam];

    // pido al usuario los elementos del arreglo
    while (contador < tam) {
        printf("Ingrese el valor de la posicion %d: ", contador);
        scanf("%d", &a[contador]);
        contador++;
    }

    // imprimo el arreglo en pantalla
    printf("El arreglo ingresado es:\n");
    printf("[");
    for (int i = 0; i < tam-1; i++) {
        printf("%d, ", a[i]);
    }
    printf("%d]\n", a[tam-1]);

    // llamo la funcion para hacer el conteo de los elementos
    int res = sumatoria(tam, a);

    printf("La sumatoria de los elementos del arreglo es %d\n", res);

    return 0;
}