#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#define BUFFER 64
#define LIMPA_TELA system("cls")

struct pilha{
    int   idade;
    char  *nome;
    char *email;
    double telefone;
    struct pilha *proximo;
};

typedef struct pilha Dados;

extern Dados* inicio;

void insere();
void exclui();
void mostra();
void mostra_erro();

#endif // PILHA_H_INCLUDED
