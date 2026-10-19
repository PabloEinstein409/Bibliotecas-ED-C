#include "fila.h"
#include <stdio.h>

//Função para criar fila com lista vazia
Fila* fila_cria(void){
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}
//Procedimento para inserir elemento na fila
void fila_insere(Fila* f, float v){
    Lista* n = (Lista*) malloc (sizeof(Lista));
    n->info = v;
    n->prox = NULL;
    if(f->fim != NULL){
        f->fim->prox = n;
    }
    else{
        f->ini = n;
    }
    f->fim = n;
}
//Função para retirar elemento na fila
float fila_retira(Fila* f){
    Lista* t;
    float v;
    if(fila_vazia(f)){
        printf("Fila vazia.\n");
    }
    t = f->ini;
    v = t->info;
    f->ini = t->prox;
    if(f->ini == NULL){
        f->fim = NULL;
    }
    free(t);
    return v;
}
//Procedimento para liberar a fila
void fila_libera(Fila* f){
    Lista* q = f->ini;
    while(q!=NULL){
        Lista* t = q->prox;
        free(q);
        q = t;
    }
    free(f);
}