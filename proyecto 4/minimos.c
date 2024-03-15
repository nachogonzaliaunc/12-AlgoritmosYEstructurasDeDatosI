#include <assert.h>
#include <stdio.h>
#include <limits.h>


int minimo_pares (int tam, int a[]) {
    int res = INT_MAX;

    for (int i = 0; i < tam; i++) {
        if (a[i] % 2 == 0) {
            if (a[i] < res) { 
                res = a[i];
            }
        }
    }

    return res;
}


int minimo_impares (int tam, int a[]) {
    int res = INT_MAX;

    for (int i = 0; i < tam; i++) {
        if (a[i] % 2 == 1) {
            if (a[i] < res) {
                res = a[i];
            }
        }
    }

    return res;
}


int main () {

    // pido al usuario el largo del arreglo
    int tam = printf("Ingresa el largo del arreglo: ");
    scanf("%d", &tam);

    // verifico que sea un valor valido
    assert(tam > 0);

    // declaro el arreglo con el largo deseado
    int a[tam];

    // pido al usuario los valores del arreglo
    for (int i = 0; i < tam; i++) {
        printf("Ingresa el valor de la posicion %d: ", i);
        scanf("%d", &a[i]);
    }

    // imprimo el arreglo por pantalla
    printf("El arreglo ingresado es: [");
    for (int i = 0; i < tam-1; i++) {
        printf("%d, ", a[i]);
    }
    printf("%d]\n", a[tam-1]);

    // ejecuto las funciones e imprimo los resultados
    int res_pares = minimo_pares(tam, a);
    res_pares == INT_MAX ? printf("No hay elementos pares en el arreglo\n") : printf("El minimo elemento par es: %d\n", res_pares);

    int res_impares = minimo_impares(tam, a);
    res_impares == INT_MAX ? printf("No hay elementos impares en el arreglo\n") : printf("El minimo elemento impar es: %d\n", res_impares);


    return 0;
}