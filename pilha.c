#include "pilha.h"
#include <stdio.h>

//Função para criar pilha vazia
Pilha* pilha_cria(void){
    Pilha* p = (Pilha*) malloc (sizeof(Pilha));
    p->prim = NULL;
    return p;
}
//Procedimento para inserir novo elemento na pilha
void pilha_push(Pilha* p, float v){
    Elemento* n = (Elemento*) malloc (sizeof(Elemento));
    n->info = v;
    n->prox = p->prim;
    p->prim = n;
}
//Função para retirar elemento da pilha
float pilha_pop(Pilha* p){
    Elemento* t;
    float v;
    if(pilha_vazia(p)){
        exit(1);
    }
    t = p->prim;
    v = t->info;
    p->prim = t->prox;
    free(t);
    return v;
}
//Procedimento para liberar pilha
void pilha_libera(Pilha* p){
    Elemento *t, *q = p->prim;
    while(q!=NULL){
        t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}
//Função para verificar se a pilha está vazia
int pilha_vazia(Pilha* p){
    if(p->prim == NULL){
        return 1;
    }
    return 0;
}