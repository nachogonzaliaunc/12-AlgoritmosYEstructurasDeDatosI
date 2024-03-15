#include <stdbool.h>
#include <stdio.h>

int main () {
    int x, y, z, b, w;

    // Solicito el valor de x al usuario
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);

    // Solicito el valor de y al usuario
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);

    // Solicito el valor de z al usuario
    printf("Ingrese el valor de z: ");
    scanf("%d", &z);

    // Solicito el valor de b al usuario
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    // Solicito el valor de w al usuario
    printf("Ingrese el valor de w: ");
    scanf("%d", &w);

    // Imprimo los calculos por pantalla
    printf("x mod 4 == 0 = %d\n", x % 4 == 0);
    printf("x + y == 0 && y - x == (-1) * z = %d\n", x + y == 0 && y - x == (-1) * z);
    printf("not b && w = %d\n", !b && w);

    // Si tengo x-> 4, y->-4, z->8, b->true, w->false las expresiones me devuelven true, true, false respectivamente


    return 0;
}