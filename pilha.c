#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define BUFFER 64
#define LIMPA_TELA system("cls")

Dados* inicio = NULL;

void insere()
{
    int      age;
    char   *nome;
    char  *email;
    double telefone;


    nome  = (char*) malloc(sizeof(BUFFER));
    email = (char*) malloc(sizeof(BUFFER));

    printf("Digite o nome: ");
    scanf("%s",nome);

    printf("\nDigite a idade: ");
    scanf("%d",&age);

    printf("\nDigite o e-mail: ");
    scanf("%s",email);

    printf("\nDigite o telefone: ");
    scanf("%lf",&telefone);

    Dados *atual = (Dados*)malloc(sizeof(BUFFER));

    atual -> idade = age;
    atual -> proximo = inicio;

    atual -> nome = nome;
    atual -> proximo = inicio;

    atual -> email = email;
    atual -> proximo = inicio;

    atual -> telefone = telefone;
    atual -> proximo = inicio;

    if(inicio == NULL){
        inicio = atual;
    }
    else{
        atual->proximo =inicio;
        inicio = atual;
    }

    printf("\nDados inseridos\n");
    getchar();
}
void exclui()
{
    Dados *auxiliar;
    auxiliar=inicio->proximo;

    free(inicio);
    inicio=auxiliar;
    printf("\nDados excluidos!\n");
    getchar();
}
void mostra()
{
    int posicao=0;
    Dados *nova=inicio;
    LIMPA_TELA;
        printf("         DADOS DA PILHA:        ");
       for(; nova != NULL; nova = nova -> proximo){
        posicao++;
        printf("\n----------------------------------");
        printf("\nPosicao: %d ",posicao);
        printf("\nNome: %s",nova->nome);
        printf("\nIdade: %d anos",nova->idade);
        printf("\nE-mail: %s",nova->email);
        printf("\nTelefone: %lf",nova->telefone);
        printf("\n----------------------------------");
    }
    getchar();
}
void mostra_erro()
{
    LIMPA_TELA;
    printf("\nErro de Digitacao: \n");
    printf("\nDigite uma opcao valida (pressione -Enter- p/ continuar)!\n\n");
    getchar();
}
