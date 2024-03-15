#include <assert.h>
#include <stdio.h>


// pido los valores al usuario
int pedir_valor (char name) {
    int n;

    printf("Ingrese un valor para la variable %c: ", name);
    scanf("%d", &n);

    return n; 
}


// calculo el minimo
int calcular_minimo (int x, int y) {
    int res = 0;

    if (x <= y) {
        res = x;
    } else {
        res = y;
    }

    return res;
}


// imprimo el minimo
void imprimir_minimo (int min) {
    printf("El minimo valor introducido es: %d\n", min);
}


int main () {

    // pido los valores al usuario
    int x = pedir_valor('x');
    int y = pedir_valor('y');

    int min = calcular_minimo(x, y);

    // compruebo que el minimo sea el valor que buscamos
    assert(min <= x && min <= y);

    imprimir_minimo(min);

    return 0;
}