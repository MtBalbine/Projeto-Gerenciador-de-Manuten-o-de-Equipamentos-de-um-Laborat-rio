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
    int cod_s;
    char cod_e[7];// uma casa a mais para "\0"
    char nome[21];// uma casa a mais para "\0"
    int prio;
    int dias;
    struct dados *prox;
}Dados;

typedef struct chamados
{
   No *Inicio;
}Chamados;

Chamado* InicializaListaChamado()
{
    return NULL;
}

Chamados* ListaChamados()
{
    Chamados *aux;
    aux=(Chamados*)malloc(sizeof(Chamados));
    aux->inicio=NULL;
    return aux;
}

Dados* CriaChamado(Dados* anterior, int soli, char cequi[], char nequi[], int pri, int prazo)
{
    Dados* aux;
    aux=(Dados*)malloc(sizeof(Dados));
    //aux->cod_s=soli;
    //aux->cod_e=cequi; corrigir leiura de vetores
    aux->nome=nequi;
    aux->prio=pri;
    aux->dias=prazo;

    aux->prox=anterior;
    return aux;
}

void NovoChamado(Chamado *anterior)
{

}

#endif // FUNCOES_H_INCLUDED
