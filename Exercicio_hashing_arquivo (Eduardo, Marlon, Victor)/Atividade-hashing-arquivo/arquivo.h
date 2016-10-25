#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <list>
#include "func_pessoa.h"

class arquivo{

public:
    arquivo();
    void recriar_arq_0();
    void recriar_arq_1();
    void recriar_arq_2();
    void recriar_arq_3();
    void recriar_arq_4();
    void inserir_dado_0(int codigo, string nome);
    void inserir_dado_1(int codigo, string nome);
    void inserir_dado_2(int codigo, string nome);
    void inserir_dado_3(int codigo, string nome);
    void inserir_dado_4(int codigo, string nome);
    void carregar_arq(list<pessoa> plist[5]);

};

arquivo::arquivo(){}

void arquivo::recriar_arq_0()
{
    ofstream arq;

    cout << "Criando Arq_0" << endl;

    arq.open("Arq_0.txt", ios::trunc);
    arq.close();


    cout << "Arquivo do hash 0 Criado com Sucesso" << endl << endl;
}

void arquivo::recriar_arq_1()
{
    ofstream arq;

    cout << "Criando Arq_1" << endl;

    arq.open("Arq_1.txt", ios::trunc);
    arq.close();


    cout << "Arquivo do hash 1 Criado com Sucesso" << endl << endl;
}

void arquivo::recriar_arq_2()
{
    ofstream arq;

    cout << "Criando Arq_2" << endl;

    arq.open("Arq_2.txt", ios::trunc);
    arq.close();


    cout << "Arquivo do hash 2 Criado com Sucesso" << endl << endl;
}

void arquivo::recriar_arq_3()
{
    ofstream arq;

    cout << "Criando Arq_3" << endl;

    arq.open("Arq_3.txt", ios::trunc);
    arq.close();


    cout << "Arquivo do hash 3 Criado com Sucesso" << endl << endl;
}

void arquivo::recriar_arq_4()
{
    ofstream arq;

    cout << "Criando Arq_4" << endl;

    arq.open("Arq_4.txt", ios::trunc);
    arq.close();


    cout << "Arquivo do hash 4 Criado com Sucesso" << endl << endl;
}

void arquivo::inserir_dado_0(int codigo, string nome)
{
    fstream arq;

    arq.open("Arq_0.txt",ios::app);
    cout << "Gravando dados no hash 0..." << endl;

    arq << codigo << "\t" << nome << "\n";
    cout << "Dados Salvos ..." << endl;

   arq.close();

}

void arquivo::inserir_dado_1(int codigo, string nome)
{
    fstream arq;

    arq.open("Arq_1.txt",ios::app);
    cout << "Gravando dados no hash 1..." << endl;

    arq << codigo << "\t" << nome << "\n";
    cout << "Dados Salvos ..." << endl;

   arq.close();

}
void arquivo::inserir_dado_2(int codigo, string nome)
{
    fstream arq;

    arq.open("Arq_2.txt",ios::app);
    cout << "Gravando dados no hash 2..." << endl;

    arq << codigo << "\t" << nome << "\n";
    cout << "Dados Salvos ..." << endl;

   arq.close();

}
void arquivo::inserir_dado_3(int codigo, string nome)
{
    fstream arq;

    arq.open("Arq_3.txt",ios::app);
    cout << "Gravando dados no hash 3..." << endl;

    arq << codigo << "\t" << nome << "\n";
    cout << "Dados Salvos ..." << endl;

   arq.close();

}
void arquivo::inserir_dado_4(int codigo, string nome)
{
    fstream arq;

    arq.open("Arq_4.txt",ios::app);
    cout << "Gravando dados no hash 4..." << endl;

    arq << codigo << "\t" << nome << "\n";
    cout << "Dados Salvos ..." << endl;

   arq.close();

}

void arquivo::carregar_arq(list<pessoa> plist[5])
{
    ifstream arq;
    pessoa p;
    int codigo;
    string nome;
    ////// CARREGAR Arquivo 0 ///////////////////////////////
    arq.open("Arq_0.txt", ios::in);

    if(arq.fail() == 1){
       cout << "O arquivo Arq_0 não foi encontrado!" << endl;
       arq.close();
    }
    else{

        cout << "Arquivo Arq_0" << endl;
        while(!arq.eof()){
            arq >> codigo >> nome;

            p.setcodigo(codigo);
            p.setnome(nome);
            plist[p.getcodigo()%5].push_back(p);
        }
        arq.close();
    }
    ////// CARREGAR Arquivo 1 ///////////////////////////////
        arq.open("Arq_1.txt", ios::in);

    if(arq.fail() == 1){
       cout << "O arquivo Arq_1 não foi encontrado!" << endl;
       arq.close();
    }
    else{

        cout << "Arquivo Arq_1" << endl;
        while(!arq.eof()){
            arq >> codigo >> nome;

            p.setcodigo(codigo);
            p.setnome(nome);
            plist[p.getcodigo()%5].push_back(p);
        }
        arq.close();
    }
    ////// CARREGAR Arquivo 2 ///////////////////////////////
        arq.open("Arq_2.txt", ios::in);

    if(arq.fail() == 1){
       cout << "O arquivo Arq_2 não foi encontrado!" << endl;
       arq.close();
    }
    else{

        cout << "Arquivo Arq_2" << endl;
        while(!arq.eof()){
            arq >> codigo >> nome;

            p.setcodigo(codigo);
            p.setnome(nome);
            plist[p.getcodigo()%5].push_back(p);
        }
        arq.close();
    }
    ////// CARREGAR Arquivo 3 ///////////////////////////////

        arq.open("Arq_3.txt", ios::in);

    if(arq.fail() == 1){
       cout << "O arquivo Arq_3 não foi encontrado!" << endl;
       arq.close();
    }
    else{

        cout << "Arquivo Arq_3" << endl;
        while(!arq.eof()){
            arq >> codigo >> nome;

            p.setcodigo(codigo);
            p.setnome(nome);
            plist[p.getcodigo()%5].push_back(p);
        }
        arq.close();
    }
    ////// CARREGAR Arquivo 4 ///////////////////////////////

        arq.open("Arq_4.txt", ios::in);

    if(arq.fail() == 1){
       cout << "O arquivo Arq_4 não foi encontrado!" << endl;
       arq.close();
    }
    else{

        cout << "Arquivo Arq_4" << endl;
        while(!arq.eof()){
            arq >> codigo >> nome;

            p.setcodigo(codigo);
            p.setnome(nome);
            plist[p.getcodigo()%5].push_back(p);
        }
        arq.close();
    }
}
