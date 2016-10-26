/*
*
*   classe para criar o txt, ler
*   ou seja realiza manuipulação e manda para o gerenciador de data
*
*/

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class func_arquivo{
    public:
        func_arquivo();
        void cria_arquivo();
        void apaga_arquivo();
        void inicia_data();
        string converte_string(int valor);
};

//funçaõ que convertte int em string para nomear txt
string func_arquivo::converte_string(int valor){

    string convertido;
    stringstream converter;
    converter << valor;
    convertido = converter.str();
    return convertido;
}

//construtor
func_arquivo::func_arquivo(){

    ofstream arquivo;

    for(int i=0;i<TAM;i++){

        string nome = converte_string(i);

        arquivo.open("teste", ios::trunc);
        arquivo.close();
    }
}

//função capaz de criar o arquivo e escrever dentro
void func_arquivo::cria_arquivo(){

}

//função capaz de apagar os dados e limpar o arquivo
void func_arquivo::apaga_arquivo(){

}

//função capaz de iniciar o programa verificando a existenci de data
void func_arquivo::inicia_data(){

}
