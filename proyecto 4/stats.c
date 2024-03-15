#include <assert.h>
#include <limits.h>
#include <stdio.h>


struct datos_t {
    float maximo;
    float minimo;
    float promedio;
};


struct datos_t stats (int tam, float a[]) {
    // declaro e inicializo la estructura
    struct datos_t datos;
    datos.maximo = INT_MIN;
    datos.minimo = INT_MAX;
    datos.promedio = 0;

    for (int i = 0; i < tam; i++) {
        if (a[i] < datos.minimo) {
            datos.minimo = a[i];
        }

        if (a[i] > datos.maximo) {
            datos.maximo = a[i];
        }

        datos.promedio += a[i];
    }

    datos.promedio /= tam;

    // imprimo los resultados
    printf("El elemento maximo del arreglo es: %f\n", datos.maximo);
    printf("El elemento minimo del arreglo es: %f\n", datos.minimo);
    printf("El promedio de valores del arreglo es: %f\n", datos.promedio);

    return datos;
}


int main () {

    // pido al usuario el tamaño del arreglo
    int tam = printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tam);

    // verifico que el valor sea valido
    assert(tam > 0 && "El tamaño del arreglo debe ser mayor o igual a 1");

    // declaro el arreglo con el tamaño deseado
    float a[tam];

    // pido al usuario los valores del arreglo
    for (int i = 0; i < tam; i++) {
        printf("Ingrese el valor de la posicion %i: ", i);
        scanf("%f", &a[i]);
    }
    
    // imprimo el arreglo por pantalla
    printf("El arreglo ingresado es [");
    for (int i = 0; i < tam-1; i++) {
        printf("%f, ", a[i]);
    }
    printf("%f]\n", a[tam-1]);

    // ejecuto el programa
    stats(tam, a);

    return 0;
}