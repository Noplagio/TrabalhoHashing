#include <iostream>

using namespace std;

class pessoa{
    private:
        int codigo;
        int idade;
        string nome;

    public:
        pessoa();
        ~pessoa();
        pessoa(int codigo, int idade, string nome);
        void set_codigo(int codigo);
        void set_idade(int idade);
        void set_nome(string nome);
        int get_codigo();
        int get_idade();
        string get_nome();
        void imprimir_pessoa();
};

//reconstrutor vasio
pessoa::pessoa(){

}

//contrutor
pessoa::pessoa(int codigo, int idade, string nome){
    this->codigo = codigo;
    this->idade = idade;
    this->nome = nome;
}

//destrutor
pessoa::~pessoa(){

}

//seta valor para idade da pessoa
void pessoa::set_idade(int idade){
    this->idade = idade;
}

//seta valor para codigo de pessoa
void pessoa::set_codigo(int codigo){
    this->codigo = codigo;
}

//seta valor para nome da pessoa
void pessoa::set_nome(string nome){
    this->nome = nome;
}

//retorna codigo da pessoa
int pessoa::get_codigo(){
    return this->codigo;
}

//retorna idade da pessoa
int pessoa::get_idade(){
    return this->idade;
}

//retorno nome da pessoa
string pessoa::get_nome(){
    return this->nome;
}

//imprime tabela hash pesso por pessoa
void pessoa::imprimir_pessoa(){
    cout<<"\n";
    cout<<"\tcodigo:\t"<<this->codigo<<"\tIdade:\t"<<this->idade<<"\tNome:\t"<<this->nome;
}
