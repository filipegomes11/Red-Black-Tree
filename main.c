#include "RB.c"

int main() {
    arvore *T = (arvore *) malloc(sizeof(arvore));
    T->raiz = NULL;
    int n = 10, i, chave;
    for (i = 0; i < n; i++) {
        inserir(T, i);
    }
    preorder(T, T->raiz);
    inorder(T, T->raiz);
    posorder(T, T->raiz);
    printf("\n");

    return 0;
}