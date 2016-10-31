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

pessoa p;
hash h;

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
   list<pessoa>::iterator it;
    for(int i=0;i<TAM;i++){
        for(it=h.lista[i].begin();it!=h.lista[i].end();it++){
            if(it->get_codigo() % TAM == i){
                char nome_arquivo[FILENAME_MAX];//usado para que a função consiga escrever todos os nomes dentro do char se nao ele nao comporta
                sprintf(nome_arquivo, "Data-%d.txt",i);//função que realiza conversao de inteiros para char
                arquivo.open(nome_arquivo, ios::app);
                arquivo << it->get_codigo() << "\t" << it->get_idade() << "\t" <<  it->get_nome() << "\n";
            }
        arquivo.close();
        }
    }
}

//função capaz de apagar os dados e limpar o arquivo
void func_arquivo::limpar_arquivo(){
    ofstream arquivo;
    for(int i=0;i<TAM;i++){
        char nome_arquivo[FILENAME_MAX];//usado para que a função consiga escrever todos os nomes dentro do char se nao ele nao comporta
        sprintf(nome_arquivo, "Data-%d.txt",i);//função que realiza conversao de inteiros para char
        arquivo.open(nome_arquivo, ios::trunc);
        arquivo.close();
    }
}

//função capaz de iniciar o programa verificando a existenci de data
void func_arquivo::inicia_data(){
    int codigo = 0;
    int idade = 0;
    string nome;
    ifstream arquivo;

    for(int i=0;i<TAM;i++){

        char nome_arquivo[FILENAME_MAX];
        sprintf(nome_arquivo, "Data-%d.txt",i);
        arquivo.open(nome_arquivo, ios::in);

            if(arquivo.fail() == 1){
                cout<<"Arquivo inexistente!! erro fatal!!";
            }
            else{
                while(!arquivo.eof()){

                    arquivo >> codigo >> idade >> nome;

                    p.set_codigo(codigo);
                    p.set_idade(idade);
                    p.set_nome(nome);
                    h.insere_pessoa_hash(p);
                    arquivo.close();
                }

            }

    }

}
