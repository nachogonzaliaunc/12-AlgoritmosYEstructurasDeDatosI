#include <assert.h>
#include <stdbool.h>
#include <stdio.h>


bool todos_pares (int tam, int a[]) {
    bool res = true;

    for (int i = 0; i < tam && res; i++) {
        res = res && (a[i] % 2 == 0);
    }

    return res;
}


bool existe_multiplo (int m, int tam, int a[]) {
    bool res = false;

    for (int i = 0; i < tam && !res; i++) {
        res = res || (a[i] % m == 0);
    }

    return res;
}


int main () {

    // pido al usuario el largo del arreglo
    int tam = printf("Ingrese el largo del arreglo: ");
    scanf("%d", &tam);

    // declaro el arreglo con el largo deseado
    int a[tam];

    // pido al usuario los elementos del arreglo
    for (int i = 0; i < tam; i++) {
        printf("Ingrese el valor de la posicion %d: ", i);
        scanf("%d", &a[i]);
    }

    // verifico que el valor ingresado sea valido
    assert(tam > 0);

    // imprimo el arreglo ingresado
    printf("El arreglo ingresado es: [");
    for (int i = 0; i < tam-1; i++) {
        printf("%d, ", a[i]);
    }
    printf("%d]\n", a[tam-1]);
    
    // doy a elegir al usuario que funcion elegir
    int funcion = printf("Que funcion vamos a correr?\n1. todos_pares()\n2. existe_multiplo\n");
    scanf("%d", &funcion);

    // en funcion de lo elegido, ejecuto las funciones
    if (funcion == 1) {
        bool res = todos_pares(tam, a);
        res ? printf("Todos los valores son pares\n") : printf("Existe al menos un valor que no es par\n");
    }

    else if (funcion == 2) {
        int m = printf("Ingresa un valor para determinar si hay algun multiplo en el array: ");
        scanf("%d", &m);
        bool res = existe_multiplo(m, tam, a);
        res ? printf("En el arreglo existe al menos un multiplo de %d\n", m) : printf("No hay multiplos de %d en el arreglo\n", m);
    }

    // si el usuario elige algun otro valos de los proporcionados, hay error
    else {
        assert(funcion == 1 || funcion == 2);
    }
    

    return 0;
}