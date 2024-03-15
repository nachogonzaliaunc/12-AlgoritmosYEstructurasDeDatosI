#include <assert.h>
#include <stdbool.h>
#include <stdio.h>


typedef char clave_t;
typedef int valor_t;


struct asoc {
    clave_t clave;
    valor_t valor;
};


bool asoc_existe (int tam, struct asoc a[], clave_t c) {
    bool res = false;

    for (int i = 0; i < tam && !res; i++) {
        if (a[i].clave == c) {
            res = true;
        }
    }

    return res;
}


int main () {

    // pido al usuario el largo del arreglo
    int tam = printf("Introduzca el largo del arreglo: ");
    scanf("%d", &tam);

    // verifico que el valor ingresado sea valido
    assert(tam > 0 && "el arreglo debe tener al menos un elemento");

    // declaro el arreglo con la longitud deseada
    struct asoc a[tam];

    // pido al usuario los valores del arreglo, que en éste caso serán estructuras
    for (int i = 0; i < tam; i++) {
        printf("Ingrese la clave y el valor de la posicion %d:\n", i);
        printf("Clave: ");
        scanf(" %c", &a[i].clave); // sin el espacio no lee la clave
        printf("Valor: ");
        scanf("%d", &a[i].valor);
    }

    // imprimo el arreglo
    printf("[");
    for (int i = 0; i < tam-1; i++) {
        printf("(%c,%d), ", a[i].clave, a[i].valor);
    }
    printf("(%c,%d)]\n", a[tam-1].clave, a[tam-1].valor);

    // pido la clave que vamos a buscar
    char c = printf("Ingrese la clave a buscar: ");
    scanf(" %c", &c);

    // ejecuto la funcion pedida e imprimo el resultado
    bool res = asoc_existe(tam, a, c);
    res ? printf("La clave existe en el arreglo\n") : printf("La clave NO existe en el arreglo\n");

    return 0;
}