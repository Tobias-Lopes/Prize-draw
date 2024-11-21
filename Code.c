#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Define um tamanho máximo para o vetor de nomes
#define MAX_PARTICIPANTES 100
#define MAX_NOME 100

int main() {
    char PARTICIPANTES[MAX_PARTICIPANTES][MAX_NOME];
    int N = 0; // Contador de participantes
    int sorteados[MAX_PARTICIPANTES] = {0}; // Vetor para controlar participantes já sorteados
    char entrada[MAX_NOME];
    int S; // Semente para o gerador de números aleatórios
    int sorteados_count = 0;

    printf("Digite os nomes dos participantes (um por linha). Digite 'acabou' para encerrar:\n");
    
    while (1) {
        fgets(entrada, MAX_NOME, stdin);
        entrada[strcspn(entrada, "\n")] = '\0'; // Remove o caractere de nova linha
        
        if (strcmp(entrada, "acabou") == 0) {
            break;
        }

        if (N >= MAX_PARTICIPANTES) {
            printf("Limite de participantes atingido!\n");
            break;
        }

        strcpy(PARTICIPANTES[N], entrada);
        N++;
    }

    printf("Informe a semente para o sorteio: ");
    scanf("%d", &S);
    srand(S);

    printf("Sorteando participantes:\n");

    while (sorteados_count < N) {
        int indice_participante = rand() % N;

        if (!sorteados[indice_participante]) {
            sorteados[indice_participante] = 1; // Marca como sorteado
            sorteados_count++;
            printf("Participante sorteado: %s\n", PARTICIPANTES[indice_participante]);
        }
    }

    return 0;
}
