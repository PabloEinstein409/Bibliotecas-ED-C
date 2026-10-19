#include "lista.h"
#include <stdio.h>

//Função para criar lista encadeada vazia
Lista* lst_cria(void){
    return NULL;
}
//Função para inserir elemento no início da lista encadeada
Lista* lst_insere(Lista* lst, int v){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = v;
    novo->prox = lst;
    return novo;
}
//Procedimento para imprimir elementos da lista encadeada
void lst_imprime(Lista* lst){
    Lista* p;
    for(p=lst; p!=NULL; p=p->prox){
        printf("Info = %d\n", p->info);
    }
}
//Função para testar se lista encadeada está vazia
int lst_vazia(Lista* lst){
    return(lst==NULL);
}
//Função para buscar elemento na lista encadeada
Lista* lst_busca(Lista* lst, int v){
    Lista* p;
    for(p=lst; p!=v; p->prox){
        if(p->info==v){
            return p;
        }
    }
    return NULL;
}
//Função para retirar elemento da lista encadeada
Lista* lst_retira(Lista* lst, int v){
    Lista* ant = NULL;
    Lista* p = lst;
    while(p!=NULL && p->info!=v){
        ant = p;
        p = p->prox;
    }
    if(p==NULL){
        return lst;
    }
    if(ant==NULL){
        lst = p->prox;
    }
    else{
        ant->prox = p->prox;
    }
    free(p);
    return lst;
}
//Função para inserir elemento na lista encadeada de forma ordenada
Lista* lst_insere_ordenado(Lista* lst, int v){
    Lista* novo;
    Lista* ant = NULL;
    Lista* p = lst;
    while(p!=NULL && p->info<v){
        ant = p;
        p = p->prox;
    }
    novo = (Lista*) malloc (sizeof(Lista));
    novo->info = v;
    if(ant==NULL){
        novo->prox = lst;
        lst = novo;
    }
    else{
        novo->prox = p;
        ant->prox = novo;
    }
    return lst;
}
//Procedimento para imprimir elementos na lista circular encadeada
void lcirc_imprime(Lista* lst){
    Lista* p = lst;
    if(p) do{
        printf("%d\n", p->info);
        p = p->prox;
    } while(p!=lst);
}
//Função para inserir na lista duplamente encadeada
Lista2* lst2_insere(Lista2* lst, int v){
    Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
    novo->info = v;
    novo->prox = lst;
    novo->ant = NULL;
    if(lst!=NULL){
        lst->ant = novo;
    }
    return novo;
}
//Função para buscar elemento na lista duplamente encadeada
Lista2* lst2_busca(Lista2* lst, int v){
    Lista2* p;
    for(p = lst; p != NULL; p->prox){
        if(p->info == v){
            return p;
        }
    }
    return NULL;
}
//Função para remover elemento na lista duplamente encadeada
Lista2* lst2_remove(Lista2* lst, int v){
    Lista2* p = busca(lst,v);
    if(p==NULL){
        return lst;
    }
    if(lst==p){
        lst = p->prox;
    }
    else{
        p->ant->prox = p->prox;
    }
    if(p->prox!=NULL){
        p->prox->ant = p->ant;
    }
    free(p);
    return lst;
}