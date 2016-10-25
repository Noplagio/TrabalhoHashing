#include <iostream>

using namespace std;

class pessoa{
    private:
        int codigo;
        string nome;

    public:
        pessoa();
        ~pessoa();
        pessoa(int codigo, string nome);
        void set_codigo(int codigo);
        void set_nome(string nome);
        int get_codigo();
        string get_nome();
        void imprimir_pessoa();
};

//reconstrutor vasio
pessoa::pessoa(){

}

//contrutor
pessoa::pessoa(int codigo, string nome){
    this->codigo = codigo;
    this->nome = nome;
}

//destrutor
pessoa::~pessoa(){

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

//retorno nome da pessoa
string pessoa::get_nome(){
    return this->nome;
}

//imprime tabela hash pesso por pessoa
void pessoa::imprimir_pessoa(){

}
