#include <assert.h>
#include <stdio.h>


// declaro el molde de la estructura
struct div_t {
    int cociente;
    int resto;
};


// pido al usuario los valores
int pedir_enteros (char name[]) {
    int n;

    printf ("Ingresa el valor del %s: ", name);
    scanf("%d", &n);

    return n;
}


// hago la division
struct div_t division (int x, int y) {
    // declaro una esctructura de nombre resultado que llevará el molde de div_t
    struct div_t resultado;

    // algoritmo de division
    int cociente = 0;
    int xtmp = x;
    
    while (x >= y) {
        x -= y;
        cociente++;
    }
    
    // asigno el cociente y el resto a la estructura resultado
    resultado.cociente = cociente;
    resultado.resto = x;

    printf("La division entera %d / %d = %d y tiene un resto de %d\n", xtmp, y, cociente, x);

    return resultado;
}


int main () {

    // pido al usuario los valores
    int x = pedir_enteros("dividendo");
    int y = pedir_enteros("divisor");

    // verifico que los valores sean positivos y el divisor no sea 0
    assert(x >= 0 && y > 0 && "Introdujo algun valor menor a 0 o un divisor nulo");

    // ejecuto la division
    division(x, y);

    return 0;
}