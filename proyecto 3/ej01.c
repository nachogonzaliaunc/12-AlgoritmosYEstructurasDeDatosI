#include <stdbool.h>
#include <stdio.h>

int main () {
    int x, y, z;

    // Solicito el valor de x al usuario
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);

    // Solicito el valor de y al usuario
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);

    // Solicito el valor de z al usuario
    printf("Ingrese el valor de z: ");
    scanf("%d", &z);


    // Modifico las variables para lograr el resultado esperado en y / 2 * x
    float a = x;
    float b = y;


    // Imprimo los calculos por pantalla
    printf("x + y + 1 = %d\n", x + y + 1);
    printf("z * z + y * 45 - 15 * x = %d\n", z * z + y * 45 - 15 * x);
    printf("y - 2 == (x * 3 + 1) mod 5 = %d\n", y - 2 == ((x * 3 + 1)%5));
    printf("y / 2 * x = %f\n", b / 2 * a);
    printf("y < x * z = %d\n", y < x * z);
    /* 
        Si bien debería devolver un booleano, en c los booleanos se representan con 0 y 1,
        entonces la última expresión devuelve un entero 
    */

    /*
        Si x->7, y->3, z->5
        x + y + 1 = 11
        z * z + y * 45 - 15 * x = 55
        y - 2 == (x * 3 + 1) mod 5 = 0
        y / 2 * x = 10.500000
        y < x * z = 1
    */

    /*
        Si x->1, y->10, z->8
        x + y + 1 = 12
        z * z + y * 45 - 15 * x = 499
        y - 2 == (x * 3 + 1) mod 5 = 0
        y / 2 * x = 5.000000
        y < x * z = 0
    */

    return 0;
}