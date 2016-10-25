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
        void set_codigo();
        void set_nome();
        int get_codigo();
        string get_nome();
        void imprimir_pessoa();
};

//contrutor vasio
pessoa::pessoa(){

}

//contrutor
pessoa::pessoa(int codigo, string nome){

}

//destrutor
pessoa::~pessoa(){

}

//seta valor para codigo de pessoa
void pessoa::set_codigo(){

}

//seta valor para nome da pessoa
void pessoa::set_nome(){

}

//retorna codigo da pessoa
int pessoa::get_codigo(){

}

//retorno nome da pessoa
string pessoa::get_nome(){

}

//imprime tabela hash pesso por pessoa
void pessoa::imprimir_pessoa(){

}
