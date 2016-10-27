/*
*
*   classe para criar o txt, ler
*   ou seja realiza manuipula��o e manda para o gerenciador de data
*
*/

#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include <map>
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

//fun�a� que convertte int em string para nomear txt
string func_arquivo::converte_string(int codigo){
    stringstream convert;
     		convert << codigo << endl;
     		string cod = convert.str();
            std::string nome_arquivo = "Data_" + cod;
            return  nome_arquivo;
}

//construtor
func_arquivo::func_arquivo(){


}

//fun��o capaz de criar o arquivo e escrever dentro
void func_arquivo::cria_arquivo(){
   ofstream arquivo;
    for(int i=0;i<TAM;i++){
        char nome[FILENAME_MAX];//usado para que a fun��o consiga escrever todos os nomes dentro do char se nao ele nao comporta
        sprintf(nome, "Data-%d.txt",i);
        arquivo.open(nome, ios::app);
        arquivo.close();
    }
}

//fun��o capaz de apagar os dados e limpar o arquivo
void func_arquivo::apaga_arquivo(){

}

//fun��o capaz de iniciar o programa verificando a existenci de data
void func_arquivo::inicia_data(){

}
