#ifndef LISTA_H
#define LISTA_H

//Declaração das estruturas
    struct lista{
        int info;
        struct lista *prox;
    };
    typedef struct lista Lista;

    struct lista2{
        int info;
        struct lista2 *ant;
        struct lista2 *prox;
    };
    typedef struct lista2 Lista2;

//Declaração das funções
    Lista* lst_cria(void);
    Lista* lst_insere(Lista* lst, int v);
    void lst_imprime(Lista* lst);
    int lst_vazia(Lista* lst);
    Lista* lst_busca(Lista* lst, int v);
    Lista* lst_retira(Lista* lst, int v);
    Lista* lst_insere_ordenado(Lista* lst, int v);
    void lcirc_imprime(Lista* lst);
    Lista2* lst2_insere(Lista2* lst, int v);
    Lista2* lst2_busca(Lista2* lst, int v);
    Lista2* lst2_remove(Lista2* lst, int v);
    static Lista* aloca(float a, float b);

#endif