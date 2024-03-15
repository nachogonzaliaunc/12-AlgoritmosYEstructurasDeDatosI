#include <stdio.h>


// pido los valores al usuario
int pedir_valor (char name) {
    int n;

    printf("Ingrese un valor para la variable %c: ", name);
    scanf("%d", &n);

    return n; 
}


int main () {

    // pido los valores al usuario
    int x = pedir_valor('x');
    int y = pedir_valor('y');
    int z = pedir_valor('z');

    // x, y, z := y, y+x+z, y+x
    int xtmp = x;
    int ytmp = y;
    x = y;
    y += xtmp + z;
    z = ytmp + xtmp;

    printf("Luego de la asignacion multiple x, y, z := y, y+x+z, y+x, tengo x=%d, y=%d, z=%d\n", x, y, z);

    return 0;
}