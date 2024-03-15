#include <assert.h>
#include <stdio.h>


// pido un entero al usuario
int pedir_entero () {
    int n;

    printf("Ingrese un valor: ");
    scanf("%d", &n);

    return n;
}


int suma_hasta (int n) {
    int res = 0;

    while (n >= 1) {
        res += n;
        n--;
    }

    return res;
}


int main () {

    // pido un entero al usuario
    int x = pedir_entero();

    // verfifico que el numero ingresado sea positivo
    assert(x > 0);

    // calculo la sumatoria desde 1 hasta n
    int sum = suma_hasta(x);

    printf("La sumatoria desde 1 hasta %d es: %d\n", x, sum); 

    return 0;
}