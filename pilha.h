#ifndef PILHA_H
#define PILHA_H
//Pilha com lista
//Declaração das estruturas
    struct elemento{
        int info;
        struct elemento *prox;
    };
    typedef struct elemento Elemento;

    struct pilha{
        int info;
        Elemento* prim; //Topo da pilha
    };
    typedef struct pilha Pilha;

//Declaração das funções
    Pilha* pilha_cria(void);
    void pilha_push(Pilha* p, float v);
    float pilha_pop(Pilha* p);
    void pilha_libera(Pilha* p);
    int pilha_vazia(Pilha* p);

#endif