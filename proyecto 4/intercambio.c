#include <assert.h>
#include <stdio.h>


int pedir_valor (char name) {
    int n;

    printf("Ingrese un valor para la variable %c: ", name);
    scanf("%d", &n);

    return n;
}


void intercambio (int x, int y) {
    int z = x;
    x = y;
    y = z;

    printf("Ahora el valor de x es %d, y el de y es %d\n", x, y);
}


int main () {

    // pido al usuario los valores
    int x = pedir_valor('x');
    int y = pedir_valor('y');

    // ejecuto el intercambio
    intercambio(x, y);

    return 0;
}