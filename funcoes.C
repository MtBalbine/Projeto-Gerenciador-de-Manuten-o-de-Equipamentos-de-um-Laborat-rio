#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

/*

    Funções de Manipulação de Lista
 

*/
    typedef struct dados
    {
        /*
        Codigo da solicitação: (int 4 caracteres)

        Código do Equipamento: (string 3 caracteres; 3 numeros)

        Nome do equipamento: (string - 20 caracteres (MAX))

        Prioridade: (int de 1 a 3)

        Período: (int)
        
        */

    }Dados;

    typedef struct no
    {
        
        Dados info; // dado 
        struct no * prox;
    }No;

    typedef struct lista
    {
        No *inicio;
    }Lista;

    Lista* InicializaLista ()
    {
        return NULL;
    }

    Lista* CriaLista ()
    {
        Lista *aux;
        aux = (Lista*) malloc(sizeof(Lista));
        aux->inicio = NULL;
        return aux;
    }

    No * AuxInsere (No* antigo, int v)
    {
        No * novo;
        novo = (No*)malloc(sizeof(No));
        novo->info = v;
        novo->prox = antigo;
        return novo;
    }
    void InsereInicio(Lista* velho, int valor)
    {
        velho->inicio = AuxInsere(velho->inicio,valor);
    }


#endif // FUNCOES_H_INCLUDED