#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// --Constantes globais--
#define MAX_TERRITORIO 5
#define TAM_STRING 100
#define MIN_TERRITORIO 1

// --definindo a estrutura dos territorios--

struct Territorio {
     
    char nome[TAM_STRING];
    char cor[TAM_STRING];
    int tropas;
};

