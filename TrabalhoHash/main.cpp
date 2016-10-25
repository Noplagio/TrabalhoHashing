/*
*Projeto criado a disciplina de Estruturas de dados II
*com bjetivo de criar um hashing que armazene valores
*e realize operações com mesmo, como salvamento em arquivo
*
*Desenvolvedores: Eduardo, Victor e Marlom
*Local: Unesc - sc
*Data: 25/10/2016
*/

#include <iostream>
#include "func_menu.h"
#include "func_pessoa.h"
#include "func_hash.h"
#include "func_arquivo.h"

//variaveis globais para acesso as outras classes
pessoa p;
hash h;

void listar_hash(){
    h.imprimi_hash();
}

void buscar_codigo(){
    int codigo;

    ler_busca_codigo();
    cout << ">>";
    cin >> codigo;
}

void remover_pessoa(){
    int codigo;

    ler_remove_pessoa();
    cout <<">>";
    cin >> codigo;
}


void insere_pessoa(){
    string nome;
    int idade;
    int codigo;

    ler_insere_pessoa();
    cout <<"\n>>";
    cin >> codigo;
    cout <<"\n>>";
    cin >> idade;
    cout <<"\n>>";
    cin >> nome;

    p.set_codigo(codigo);
    p.set_idade(idade);
    p.set_nome(nome);
    h.insere_pessoa_hash(p);
}


 int main(){

     setlocale(LC_ALL, "Portuguese");//passando codigo para portugues

    int op = menu_principal();

        while(op != 0){
            switch(op){
                case 1:
                    insere_pessoa();
                    op = menu_principal();
                    break;
                case 2:
                    remover_pessoa();
                    op = menu_principal();
                    break;
                case 3:
                    buscar_codigo();
                    op = menu_principal();
                    break;
                case 4:
                    listar_hash();
                    op = menu_principal();
                    break;
                default :
                    cout << "Opção inválida, Finalizando programa!!"<<endl;
                    op = 0;
                    break;
            }
        }

 }
