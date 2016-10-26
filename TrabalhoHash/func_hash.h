#include <iostream>
#include <list>

#define TAM 4

using namespace std;

class hash{
    private:
        list<pessoa>lista[TAM];
    public:
        hash();
        ~hash();
        int calcular_indice_hash(int codigo);
        void insere_pessoa_hash(pessoa p);
        void remove_pessoa_hash();
        void consulta_hash();
        void imprimi_hash();
};


//reconstrutor
hash::hash(){

}

//destrutor
hash::~hash(){
    for(int i=0; i < TAM; i++){
        lista[i].clear();
    }
}

//realiza calculo para saber onde inserir on hash
int hash::calcular_indice_hash(int codigo){
    int indice = codigo % TAM;
    return indice;
}

//insere pessoa no hash
void hash::insere_pessoa_hash(pessoa p){
    int indice = calcular_indice_hash(p.get_codigo());
    lista[indice].push_back(p);
}

//remove pessoa do hash
void hash::remove_pessoa_hash(int codigo, int indice){
    for(int i = lista[indice].begin; i < lista[indice].end; i++ ){
        if(i = codigo){
            cout<< "Registro Deletado";
            lista[i].clear();

        }
    }
}

//consulta o hash pelo codigo
void hash::consulta_hash(int codigo, int indice){
    for(int i = lista[indice].begin; i < lista[indice].end; i++ ){
        if(i = codigo){
            cout<< "Resultado da consulta:";
            imprimir_pessoa();

        }
    }
}

//exibi no termial oque temos no hash
void hash::imprimi_hash(){

    list<pessoa>::iterator it;
    for(int i=0;i<TAM;i++){
        for(it=lista[i].begin();it!=lista[i].end();it++){
            it->imprimir_pessoa();
        }
    }
}

