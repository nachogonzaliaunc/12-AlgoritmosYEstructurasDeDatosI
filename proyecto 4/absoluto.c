#include <assert.h>
#include <stdio.h>


int pedir_valor () {
    int n;

    printf("Introduzca un valor: ");
    scanf("%d", &n);

    return n;
}


int absoluto (int x) {
    if (x < 0) {
        x *= -1;
    }

    // compruebo si se calculó correctamente el valor absoluto
    assert (x > 0);

    printf("El valor absoluto del valor es %d\n", x);

    return 0;
}


int main () {

    absoluto(pedir_valor());

    return 0;
}