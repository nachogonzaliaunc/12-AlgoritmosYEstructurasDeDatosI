#include <stdbool.h>
#include <stdio.h>

// Los ejericios 1.e y 1.f son idénticos si al estado inicial lo dá el usuario
int programaE (int x, int y) {
    if (x >= y) {
        x = 0;
    } else if (x <= y) {
        x = 2;
    }

    printf("\nPrograma del ejercicio 1.e:\nEl valor de x es: %d\n\n", x);
    
    return 0;
}


// Parte b del ejercicio 4
int Programa (int x, int y, int z, int m) {
    
    printf("Programa 4.c\nEn el estado o0, los valores son:\n x = %d\n y = %d\n z = %d\n m = %d\n", x, y, z, m);

    if (x < y) {
        m = x;
    } else {
        m = y;
    }

    printf("En el estado o1, los valores son:\n x = %d\n y = %d\n z = %d\n m = %d\n", x, y, z, m);

    if (m < z) {
        m = m;
    } else {
        m = z;
    }

    printf("En el estado o2, los valores son:\n x = %d\n y = %d\n z = %d\n m = %d\n", x, y, z, m);

    return 0;
}

/*
    El programa calcula el menor elemento entre x, y, z, donde m es la variable que guarda el elemento minimo
    Si x->5, y->4, z->8, m->0, al final del programa m = 4
*/



int main () {
    int x,y,z;
    int m = 0;

    // Solicito el valor de x al usuario
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);

    // Solicito el valor de y al usuario
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);

    // Solicito el valor de z al usuario
    printf("Ingrese el valor de z: ");
    scanf("%d", &z);

    // Ejecuto los programas
    programaE (x,y);
    Programa (x,y,z,m);

    return 0;
}