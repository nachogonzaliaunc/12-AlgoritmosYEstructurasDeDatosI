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

    // x, y := x+1, x+y
    int tmp = x;
    x++;
    y += tmp;

    printf("Luego de la asignacion multiple x, y:= x+1, x+y, tengo x=%d, y=%d\n", x, y);

    return 0;
}