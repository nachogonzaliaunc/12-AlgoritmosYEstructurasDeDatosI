#include <assert.h>
#include <stdio.h>


void intercambiar (int tam, int a[], int i, int j) {
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;

    // imprimo el resultado
    printf("El arreglo con las posiciones intercambiadas es: [");
    for (int i = 0; i < tam-1; i++) {
        printf("%d, ", a[i]);
    }
    printf("%d]\n", a[tam-1]);
}


int main () {

    // pido al usuario el largo del arreglo
    int tam = printf("Ingresa el largo del arreglo: ");
    scanf("%d", &tam);

    // verifico que sea un valor valido
    assert(tam > 1 && "Si tengo menos de 2 posiciones, no puedo hacer el intercambio");

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

    // pido al usuario las posiciones a intercambiar
    int intercambio1 = printf("Elegir una posicion a intercambiar: ");
    scanf("%d", &intercambio1);
    int intercambio2 = printf("Elegir la otra posicion a intercambiar: ");
    scanf("%d", &intercambio2);

    // verifico que los datos ingresados sean validos
    assert(intercambio1 >= 0 && intercambio1 < tam && intercambio2 >= 0 && intercambio2 < tam && intercambio1 != intercambio2);

    // llamo a la funcion para intercambiar
    intercambiar(tam, a, intercambio1, intercambio2);

    return 0;
}