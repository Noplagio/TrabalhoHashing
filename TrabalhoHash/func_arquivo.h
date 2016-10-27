/*
*
*   classe para criar o txt, ler
*   ou seja realiza manuipulação e manda para o gerenciador de data
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
        void limpar_arquivo();
        void inicia_data();
};


//construtor
func_arquivo::func_arquivo(){


}

//função capaz de criar o arquivo e escrever dentro
void func_arquivo::cria_arquivo(){
   ofstream arquivo;
    for(int i=0;i<TAM;i++){
        char nome[FILENAME_MAX];//usado para que a função consiga escrever todos os nomes dentro do char se nao ele nao comporta
        sprintf(nome, "Data-%d.txt",i);//função que realiza conversao de inteiros para char
        arquivo.open(nome, ios::app);
        arquivo.close();
    }
}

//função capaz de apagar os dados e limpar o arquivo
void func_arquivo::limpar_arquivo(){

}

//função capaz de iniciar o programa verificando a existenci de data
void func_arquivo::inicia_data(){

}
