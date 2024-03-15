#include <assert.h>
#include <stdio.h>


struct comp_t {
    int menores;
    int iguales;
    int mayores;
};

struct comp_t cuantos (int tam, int a[], int elem) {
    // declaro e inicializo la estructura
    struct comp_t resultado;
    resultado.menores = 0;
    resultado.iguales = 0;
    resultado.mayores = 0;

    // hago las comparaciones
    for (int i = 0; i < tam; i++) {
        if (a[i] < elem) {
            resultado.menores++;
        } else if (a[i] == elem) {
            resultado.iguales++;
        } else {
            resultado.mayores++;
        }
    }

    // imprimo en pantalla el resultado
    if (resultado.menores == 0) {
        printf("No hay elementos menores a %d\n", elem);
    } else if (resultado.menores == 1) {
        printf("Hay un solo elemento menor a %d\n", elem);
    } else {
        printf("Hay %d elementos menores a %d\n", resultado.menores, elem);
    }

    if (resultado.iguales == 0) {
        printf("No hay elementos iguales a %d\n", elem);
    } else if (resultado.iguales == 1) {
        printf("Hay un solo elemento igual a %d\n", elem);
    } else {
        printf("Hay %d elementos iguales a %d\n", resultado.iguales, elem);
    }

    if (resultado.mayores == 0) {
        printf("No hay elementos mayores a %d\n", elem);
    } else if (resultado.mayores == 1) {
        printf("Hay un solo elemento mayor a %d\n", elem);
    } else {
        printf("Hay %d elementos mayores a %d\n", resultado.mayores, elem);
    }


    return resultado;
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

    // pido al usuario el valor a comparar
    int elem = printf("Ingrese el elemento a comparar: ");
    scanf("%d", &elem);

    // ejecuto el programa
    cuantos(tam, a, elem);

    return 0;
}