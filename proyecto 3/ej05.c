#include <stdio.h>

// Programa del ejercicio 1.h
int programaH (int i) {
    int estado = 0;

    // printf("La variable i en el estado %d es: %d\n", estado, i);

    while (i != 0) {
        i -= 1;
        estado++;
        // printf("La variable i en el estado %d es: %d\n", estado, i);
    }

    return 0;
}


// Programa del ejercicio 1.i
int programaI (int i) {

    while (i != 0) {
        i = 0;
    }

    // printf("i = %d\n", i);
    
    return 0;
}


// Programa a traducir del ejercicio 5.b 1)
/* 
    El programa hace el calculo de una division, donde:
    x comienza siendo el dividendo y termina siendo el reso
    y es el divisor
    i es el resultado de la division
*/
int ciclo1 (int x, int y) {
    int i = 0;

    // printf("En el estado %d:\n x = %d\n y = %d\n", i, x, y);

    while (x >= i) {
        x -= y;
        i++;
        // printf("En el estado %d:\n x = %d\n y = %d\n", i, x, y);
    }
    
    return 0;
}


// Programa a traducir del ejercicio 5.b 2)
// El programa toma un valor x y calcula si es primo o no
int ciclo2 (int x) {
    int i = 2;
    int res = 0;
    int estado = 0;

    res = 1;

    while (i < x && res) {
        res = res && (x % i != 0);
        i++;
        estado++;

        // printf("En el estado %d:\n x = %d\n i = %d\n res = %d\n", estado, x, i, res);
    }
    

    return 0;
}


int main () {
    int x, y;

    // Solicito el valor de x al usuario
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);

    // Solicito el valor de y al usuario
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);

    // Ejecuto los programas
    programaH(x);
    programaI(x);
    ciclo1(x, y);
    ciclo2(x);

    return 0;
}