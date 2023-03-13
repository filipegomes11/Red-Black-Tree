#ifndef RB_H
#define RB_H
#include <stdlib.h>

typedef struct no {
    char *estado;
    int cor;
    struct no *esq;
    struct no *dir;
    struct no *pai;
    int indice;
} no;

typedef struct arvore {
    no *raiz;
} arvore;

void rotacao_esquerdaRB(arvore *T, no *x);
void rotacao_direitaRB(arvore *T, no *x);
void inserirRB(arvore *T, int a);
void inserirRB_corrigir(arvore *T, no *z);
void transplantRB(arvore *T, no *u, no *v);
no *minimoRB(no *x);
void removerRB(arvore *T, no *z);
void removerRB_corrigir(arvore *T, no *x);
void preorderRB(arvore *T, no *x);
void inorderRB(arvore *T, no *x);
void posorderRB(arvore *T, no *x);



#endif




