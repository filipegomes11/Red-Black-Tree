#ifndef RB_H
#define RB_H
#include <stdlib.h>

typedef struct no {
    int chave;
    int cor;
    struct no *esq;
    struct no *dir;
    struct no *pai;
} no;

typedef struct arvore {
    no *raiz;
} arvore;

void rotacao_esquerda(arvore *T, no *x);
void rotacao_direita(arvore *T, no *x);
void inserir(arvore *T, int a);
void inserir_corrigir(arvore *T, no *z);
void transplant(arvore *T, no *u, no *v);
no *minimo(no *x);
void remover(arvore *T, no *z);
void remover_corrigir(arvore *T, no *x);
void rotacao_esquerda(arvore *T, no *x);
void rotacao_direita(arvore *T, no *x);
void preorder(arvore *T, no *x);
void inorder(arvore *T, no *x);
void posorder(arvore *T, no *x);



#endif




