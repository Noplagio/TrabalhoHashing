#include <iostream>
#include <list>

#define TAM 5

using namespace std;

class hash{
    private:
        list<pessoa>plist[TAM];
    public:
        hash();
        ~hash();
        int calcular_indice_hash();
        void insere_pessoa_hash();
        void remove_pessoa_hash();
        void consulta_hash();
        void imprimi_hash();
};


//reconstrutor
hash::hash(){

}

//destrutor
hash::~hash(){

}

//insere pessoa no hash
void hash::insere_pessoa_hash(){

}

//remove pessoa do hash
void hash::remove_pessoa_hash(){

}

//consulta o hash pelo codigo
void hash::consulta_hash(){

}

//exibi no termial oque temos no hash
void hash::imprimi_hash(){

}

//calcula e retorna o indice do hash
int hash::calcular_indice_hash(){

}
