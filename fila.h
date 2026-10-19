#ifndef FILA_H
#define FILA_H
//Fila
//Declaração das estruturas
    struct lista{
        float info;
        struct lista* prox;
    };
    typedef struct lista Lista;

    struct fila{
        Lista* ini;
        Lista* fim;
    };
    typedef struct fila Fila;

//Declaração das funções
    Fila* fila_cria(void);
    void fila_insere(Fila* f, float v);
    float fila_retira(Fila* f);
    void fila_libera(Fila* f);

#endif