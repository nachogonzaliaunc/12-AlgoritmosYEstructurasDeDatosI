#include <assert.h>
#include <stdbool.h>
#include <stdio.h>



bool es_primo (int n) {
    bool res = true;

    for (int i = 2; i < n-1 && res; i++) {
        if (n % i == 0) {
            res = false;
        }
    }

    return res;
}


int nesimo_primo (int N) {
    int n = 2; // comienzo evaluando desde el 2 porque 1 no es primo
    int res;

    for (int i = 0; i < N; n++) {
        if (es_primo(n)) {
            res = n;
            i++;
        }
    }

    return res;
}


int main () {

    // pido al usuario que ingrese un entero mayor a 0 y vuelvo a ejecutar si el valor no es valido 
    int n;
    do {
        printf("Ingrese un entero: ");
        scanf("%d", &n);
    } while (n <= 0);

    // ejecuto la funcion e imprimo el resultado
    int res = nesimo_primo(n);
    printf("El %d-esimo primo es: %d\n", n, res);

    return 0;
}