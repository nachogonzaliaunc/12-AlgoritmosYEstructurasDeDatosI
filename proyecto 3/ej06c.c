#include <stdio.h>


// Programas del ejercicio 6a
int pedir_entero (char name) {
    int x;

    printf ("Ingresa un valor para la variable %c: ", name);
    scanf ("%d", &x);

    return x;
}


void imprimir_entero (char name, int x) {
    printf ("El mínimo valor ingresado para la variable %c es: %d\n", name, x);
}


// Programa del ejercicio 4.b
int programa4b (int x, int y, int z, int m) {

    if (x < y) {
        m = x;
    } else {
        m = y;
    }

    if (m < z) {
        m = m;
    } else {
        m = z;
    }

    imprimir_entero('m', m);

    return 0;
}



int main () {
    int m = 0;

    // Ejecuto los programas
    int x = pedir_entero('x');
    int y = pedir_entero('y');
    int z = pedir_entero('z');
    programa4b (x,y,z,m);

    return 0;
}