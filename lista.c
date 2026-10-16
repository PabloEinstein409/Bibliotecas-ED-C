#include "lista.h"

Lista* lst_cria(void);
Lista* lst_insere(Lista* lst, int v);
Lista* lst_imprime(Lista* lst);
Lista* lst_vazia(Lista* lst);
Lista* lst_busca(Lista* lst, int v);
Lista* lst_retira(Lista* lst, int v);
Lista* lst_insere_ordenado(Lista* lst, int v);
void lcirc_imprime(Lista* lst);
Lista2* lst2_insere(Lista2* lst, int v);
Lista2* lst2_busca(Lista2* lst, int v);
Lista2* lst2_remove(Lista2* lst, int v);