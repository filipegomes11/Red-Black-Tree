#include "RB.c"

int main() {
    arvore *T = (arvore *) malloc(sizeof(arvore));
    T->raiz = NULL;
    int n = 10, i, chave;
    for (i = 0; i < n; i++) {
        inserirRB(T, i);
    }
    preorderRB(T, T->raiz);
    inorderRB(T, T->raiz);
    posorderRB(T, T->raiz);
    printf("\n");

    return 0;
}