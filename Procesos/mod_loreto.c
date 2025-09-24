/*Nombre: Andres Loreto*/
/*Trabajo Procesos*/



#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"

int main(int argc, char *argv[]) {
    int n = (argc > 1) ? atoi(argv[1]) : 3; /* tamaño por defecto 3x3 */
    size_t bytes = (size_t)n * (size_t)n * sizeof(double);

    double *A = (double*)malloc(bytes);
    double *B = (double*)malloc(bytes);
    double *C = (double*)malloc(bytes);
    if (!A || !B || !C) {
        fprintf(stderr, "Error: sin memoria\n");
        free(A); free(B); free(C);
        return 1;
    }

    iniMatriz(n, A, B);

    /* Ejemplo: mide un “trabajo” ficticio (copia A -> C) */
    InicioMuestra();
    for (int i = 0; i < n*n; ++i) C[i] = A[i];
    FinMuestra();

    /* Muestra matrices solo si n es pequeño */
    if (n <= 6) {
        printf("Matriz A:\n"); imprMatrices(n, A);
        printf("Matriz C:\n"); imprMatrices(n, C);
    }

    free(A); free(B); free(C);
    return 0;
}
