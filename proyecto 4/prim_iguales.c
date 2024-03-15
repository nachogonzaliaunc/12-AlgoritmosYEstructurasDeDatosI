#include <assert.h>
#include <stdbool.h>
#include <stdio.h>


int prim_iguales (int tam, int a[]) {
    int res = 1;
    int es_igual = true;

    for (int i = 0; i < tam-1 && es_igual; i++) {
        if (a[i] == a[i+1]) {
            res++;
        } else {
            es_igual = false;
        }
    }

    return res;
}


int main () {

    // pido al usuario el tamaño del arreglo
    int tam = printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tam);

    // verifico que el valor sea valido
    assert(tam > 0 && "El tamaño del arreglo debe ser mayor o igual a 1");

    // declaro el arreglo con el tamaño deseado
    int a[tam];

    // pido al usuario los valores del arreglo
    for (int i = 0; i < tam; i++) {
        printf("Ingrese el valor de la posicion %i: ", i);
        scanf("%d", &a[i]);
    }
    
    // imprimo el arreglo por pantalla
    printf("El arreglo ingresado es [");
    for (int i = 0; i < tam-1; i++) {
        printf("%d, ", a[i]);
    }
    printf("%d]\n", a[tam-1]);

    // ejecuto el programa
    int res = prim_iguales(tam, a);
    printf("La longitud del tramo inicial mas largo cuyos elementos son iguales es %d\n", res);
    
    // punto estrella
    printf("El arreglo con el primer tramo de numeros iguales es [");
    for (int i = 0; i < res-1; i++) {
        printf("%d, ", a[i]);
    }
    printf("%d]\n", a[res-1]);

    return 0;
}