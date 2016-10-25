#include <iostream>
#include "func_hash.h"
#include <string>

using namespace std;

pessoa p;
hash h;
void reiniciar();
void inserir();
void remover();
void consultacod();
void consultanome();
void listar();
void carregar_dados();
void salvar();
void zerar_hash();
void inserir_aleatorio();

int menu(){
        int opcao=-1;
        cout << endl << "CADASTRO PESSOA" << endl;
        cout<<"1 - Inserir"<<endl;
        cout<<"2 - Remover"<<endl;
        cout<<"3 - Consultar pessoa - pelo codigo"<<endl;
        cout<<"4 - Consultar pessoa - pelo nome"<<endl;
        cout<<"5 - Listar"<<endl;
        cout<<"6 - Salvar"<<endl;
        cout<<"7 - Zerar hash"<<endl;
        cout<<"8 - Insere Aleatorio"<<endl;
        cout<<"0 - Sair"<<endl<<endl;

        cout << "escolha uma opcao: ";
        cin >> opcao;
        return opcao;
          }

void zerar_hash()
{
    h.~hash();

}

void inserir()
{
    string nome;
    int cod;

    cout << endl << "Digite o nome da pessoa: ";
    cin >> nome;

    cout << endl << "Digite o codigo da pessoa: ";
    cin >> cod;

    p.setnome(nome);
    p.setcodigo(cod);
    h.insere(p);
}

void remover()
{
    int cod;
    cout << endl << "digite o codigo da pessoa que deseja remover: ";
    cin >> cod;

    h.remover(cod);

}

void consultacod()
{
    int cod;
    cout << endl << "Digite o Codigo: ";
    cin >> cod;

    h.consulta(cod);
}

void consultanome()
{
    string nome;

    cout << endl << "Digite o nome da pessoa: ";
    cin >> nome;

    h.consulta_nome(nome);

}

void listar()
{
    h.imprimir_hash();
}

void salvar()
{
    cout<<endl<<"Salvo Com Sucesso"<<endl;
    h.salvar_dados();
}


void carregar_dados()
{
	h.carregar_dados_salvos();
}

void inserir_aleatorio()
{
    for (int j=0; j<50; j++)
    {
    char nome [10];
    int cod;
    for (int i=0; i<10; i++)
    {
        nome[i] = rand() % 26 + 65;
    }
     cod=j;


    p.setnome(nome);
    p.setcodigo(cod);
    h.insere(p);
    }
}
