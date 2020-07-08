#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define BUFFER 64
#define LIMPA_TELA system("cls")

main()
{
    char escolha;

    do
    {
        LIMPA_TELA;
        printf("Escolha uma opcao: \n");
        printf("<1> - Inserir valor na Pilha\n");
        printf("<2> - Remover o topo da Pilha\n");
        printf("<3> - Mostrar valores da Pilha\n");
        printf("<4> - Sair\n\n");
        printf("ESCOLHA: ");
        scanf("%c", &escolha);
        switch(escolha)
        {

        case '1':
            insere();
            break;

        case '2':
            if(inicio!=NULL)
            {
                exclui();
            }
            else
            {
                printf("\nA Pilha esta vazia!\n");
                getchar();
            }
            break;

        case '3':
            if(inicio!=NULL)
            {
                mostra();
            }
            else
            {
                printf("\nA Pilha esta vazia!\n");
                getchar();
            }
            break;
        case '4':
            printf("\nObrigado por utilizar a pilha!\n");
            exit(0);
            break;

        default:
            mostra_erro();
            break;
        }
        getchar();
    }
    while (escolha > 0);
}
