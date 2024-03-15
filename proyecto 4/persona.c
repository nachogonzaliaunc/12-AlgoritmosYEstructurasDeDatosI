#include <stdio.h>


typedef struct _persona {
    char *nombre;
    int edad;
    float altura;
    float peso;
} persona_t;


float peso_promedio(unsigned int longitud, persona_t arr[]) {
    float res = 0;

    // hago la sumatoria de los pesos
    for (unsigned int i = 0; i < longitud; i++) {
        res += arr[i].peso;
    }
    
    res /= longitud; // calculo el promedio

    return res;
}

persona_t persona_de_mayor_edad(unsigned int longitud, persona_t arr[]) {
    persona_t p = arr[0];

    // comparo de a pares
    for (unsigned int i = 0; i < longitud-1; i++) {
        if (arr[i].edad < arr[i+1].edad) {
            p = arr[i+1];
        }
    }

    return p;
}

persona_t persona_de_menor_altura(unsigned int longitud, persona_t arr[]) {
    persona_t p = arr[0];

    // comparo de a pares
    for (unsigned int i = 0; i < longitud-1; i++) {
        if (arr[i].altura > arr[i+1].altura) {
            p = arr[i+1];
        }
    }
    
    return p;
}



int main() {

    // declaracion de personas
    persona_t p1 = {.nombre="Paola", .edad=21, .altura=1.85, .peso=75};
    persona_t p2 = {.nombre="Luis", .edad=54, .altura=1.75, .peso=69};
    persona_t p3 = {.nombre="Julio", .edad=40, .altura=1.70, .peso=80};

    // declaracion del arreglo que contiene a las personas
    unsigned int longitud = 3;
    persona_t arr[] = {p1, p2, p3};

    // ejecucion de las funciones e impresion de los resultados 
    printf("El peso promedio es %f\n", peso_promedio(longitud, arr));
    persona_t p = persona_de_mayor_edad(longitud, arr);
    printf("El nombre de la persona con mayor edad es %s\n", p.nombre);
    p = persona_de_menor_altura(longitud, arr);
    printf("El nombre de la persona con menor altura es %s\n", p.nombre);

    return 0;
}