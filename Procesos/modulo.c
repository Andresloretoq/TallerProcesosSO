/*Nombre: Andres Loreto*/
/*Trabajo Procesos*/




/* Implementación del módulo: SIN main */
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "modulo.h"

/* Estado interno del módulo (no expuesto) */
static struct timeval t_ini, t_fin;

void InicioMuestra(void) {
    gettimeofday(&t_ini, NULL);
}

void FinMuestra(void) {
    gettimeofday(&t_fin, NULL);
    long secs  = (long)(t_fin.tv_sec  - t_ini.tv_sec);
    long usecs = (long)(t_fin.tv_usec - t_ini.tv_usec);
    long total_us = secs * 1000000L + usecs;
    printf("%9ld \n", total_us);
}

/* Rellena m1 y m2 con valores simples (ejemplo) */
void iniMatriz(int n, double *m1, double *m2) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            m1[i*n + j] = (double)(i + j);
            m2[i*n + j] = (double)(i == j); /* identidad */
        }
    }
}

/* Imprime una matriz n x n (útil para n pequeño) */
void imprMatrices(int n, const double *matriz) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%6.1f ", matriz[i*n + j]);
        }
        printf("\n");
    }
}
