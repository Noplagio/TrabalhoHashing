#include <iostream>
#include <list>

#define TAM 4

using namespace std;

class hash{
    private:
        list<pessoa>plist[TAM];
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

}

//realiza calculo para saber onde inserir on hash
int hash::calcular_indice_hash(int codigo){
    int indice = codigo % TAM;
    return indice;
}

//insere pessoa no hash
void hash::insere_pessoa_hash(pessoa p){
    int indice = calcular_indice_hash(p.get_codigo());
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

