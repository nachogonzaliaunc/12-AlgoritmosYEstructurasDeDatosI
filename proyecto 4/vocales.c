#include <assert.h>
#include <stdbool.h>
#include <stdio.h>


char pedir_letra () {
    char c;

    printf("Introduce una letra: ");
    scanf("%c", &c);

    return c;
}


bool es_vocal (char letra) {
    bool res = letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u';

    return res;
}


int main () {

    // verifico si la letra introducida por el usuario es vocal
    bool res = es_vocal(pedir_letra());

    // imprimo el resultado
    res ? 
        printf("La letra introducida es vocal\n"):
        printf("La letra introducida NO es vocal\n");

    return 0;
}