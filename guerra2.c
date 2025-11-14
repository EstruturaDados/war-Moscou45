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

// --- Função para limpar o buffer de entrada ---

void limparBufferEntrada(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// ---laço principal do Menu ----   

int main(){
    struct Territorio paises[MAX_TERRITORIO];
    int total_territorios = 0;
    int opcao;

    do {

        printf("======================================\n");
        printf("Vamos cadastrar os 5 territorios iniciais do nosso mundo.\n");

        // cadastro dos continentes

        while (total_territorios < MAX_TERRITORIO){
            int i =1;

            printf("\n--- Cadastro do territorio %d---\n", i +total_territorios);

            printf("Nome do territorio: ");
            fgets(paises[total_territorios].nome, TAM_STRING, stdin);

            printf("Cor do Exercito (ex: azul,verde): ");
            fgets(paises[total_territorios].cor, TAM_STRING, stdin);

            paises[total_territorios].nome[strcspn(paises[total_territorios].nome, "\n")] = '\0';

            paises[total_territorios].cor[strcspn(paises[total_territorios].cor, "\n")] = '\0';

            printf("Numero de tropas: ");
            sscanf("&d", &paises[total_territorios].tropas);
            limparBufferEntrada();

            //i++;
            total_territorios++;

        }

    } while (opcao != 0);
    return 0;
} 