#include <string>
#include <list>
#include <iostream>
#include "arquivo.h"
#define TAM 5

using namespace std;

class hash{
private:
    list<pessoa>plist[TAM];

public:
    hash();
    ~hash();
    int calcula_indice(int cod);
    void insere(pessoa p);
    void remover(int cod);
    void consulta(int cod);
    void consulta_nome(string nome);
    void imprimir_hash();
    void carregar_dados_salvos();
    void salvar_dados();


};

hash::hash(){}

hash::~hash()
{
    for(int i = 0;i < TAM; i++ )
    {
        plist[i].clear();
    }
}

void hash::insere(pessoa p)
{
    plist[calcula_indice(p.getcodigo())].push_back(p);
}

void hash::remover(int cod)
{
    list<pessoa>::iterator it;

    for(it = plist[calcula_indice(cod)].begin(); it != plist[calcula_indice(cod)].end(); it ++)
    {
        if(cod == it->getcodigo())
        {
            plist[calcula_indice(cod)].erase(it);
            break;
        }

    }

}

void hash::consulta(int cod)
{
    list<pessoa>::iterator it;

        for(it = plist[calcula_indice(cod)].begin(); it != plist[calcula_indice(cod)].end(); it ++)
        {
            if(cod == it->getcodigo())
            {
                it->imprimir();
            }

        }

}

void hash::consulta_nome(string nome)
{

    list<pessoa>::iterator it;

    for(int i=0; i < TAM ; i ++)
    {

        for(it = plist[i].begin(); it != plist[i].end(); it ++)
        {
            if(nome == it->getnome())
            {
                it->imprimir();
            }

        }
    }

}

int hash::calcula_indice(int cod)
{
   int ind;

   ind = cod % TAM;

   return ind;

}

void hash::imprimir_hash()
{

list<pessoa>::iterator it;

    for(int i=0; i < TAM ; i ++)
    {

        for(it = plist[i].begin(); it != plist[i].end(); it ++)
        {
            it->imprimir();

        }
    }

}

 void hash::carregar_dados_salvos()
 {
     arquivo arq;
     arq.carregar_arq(plist);
 }

 void hash::salvar_dados()
 {
    list<pessoa>::iterator it;
    arquivo arq;

     for(int i=0; i < TAM ; i ++)
    {

        for(it = plist[i].begin(); it != plist[i].end(); it ++)
        {
            it->imprimir();
            if(i == 0)
            {
                arq.recriar_arq_0();
            }
            else if( i == 1)
            {
                arq.recriar_arq_1();
            }
            else if( i == 2)
            {
                arq.recriar_arq_2();
            }
            else if( i == 3)
            {
                arq.recriar_arq_3();
            }
            else if( i == 4)
            {
                arq.recriar_arq_4();
            }

        }
    }

    for(int i=0; i < TAM ; i ++)
    {

        for(it = plist[i].begin(); it != plist[i].end(); it ++)
        {
            it->imprimir();
            if(i == 0)
            {
                arq.inserir_dado_0(it->getcodigo(), it->getnome());
            }
            else if( i == 1)
            {
                arq.inserir_dado_1(it->getcodigo(), it->getnome());
            }
            else if( i == 2)
            {
                arq.inserir_dado_2(it->getcodigo(), it->getnome());
            }
            else if( i == 3)
            {
                arq.inserir_dado_3(it->getcodigo(), it->getnome());
            }
            else if( i == 4)
            {
                arq.inserir_dado_4(it->getcodigo(), it->getnome());
            }
        }
    }
 }

