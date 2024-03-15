#include <stdio.h>

// Programa del ejercicio 1.a 
int programaA (int x) {

    x = 5;
    
    printf("El valor de x luego de pasar por el programa 1.a es: %d\n", x);

    return 0;
}

// Programa del ejercicio 1.b 
int programaB (int x, int y) {

    x += y;
    y *= 2;

    printf("Los valores de x e y luego de pasar por el programa 1.b son: \n x = %d\n y = %d\n", x, y);

    return 0;
}

// Programa del ejercicio 1.c 
int programaC (int x, int y) {
    
    y *= 2;
    x += y;

    printf("Los valores de x e y luego de pasar por el programa 1.c son: \n x = %d\n y = %d\n", x, y);

    return 0;
}


int main () {
    int x,y;

    // Solicito el valor de x al usuario 
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);

    // Solicito el valor de y al usuario 
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);

    // Ejecuto los programas
    programaA(x);
    programaB(x,y);
    programaC(x,y);

    /*
        Si x->4, y->5:
            El valor de x luego de pasar por el programa 1.a es: 5
            Los valores de x e y luego de pasar por el programa 1.b son: 
             x = 9
             y = 10
            Los valores de x e y luego de pasar por el programa 1.c son: 
             x = 14
             y = 10

        Si x->0, y->1:
            El valor de x luego de pasar por el programa 1.a es: 5
            Los valores de x e y luego de pasar por el programa 1.b son: 
             x = 1
             y = 2
            Los valores de x e y luego de pasar por el programa 1.c son: 
             x = 2
             y = 2

        Si x->10, y->0:
            El valor de x luego de pasar por el programa 1.a es: 5
            Los valores de x e y luego de pasar por el programa 1.b son: 
             x = 10
             y = 0
            Los valores de x e y luego de pasar por el programa 1.c son: 
             x = 10
             y = 0
    */

    return 0;
}