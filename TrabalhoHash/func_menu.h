#include <iostream>
#include <locale.h>
/*
*Função destinada as leiuras que o programa realiza
*/

using namespace std;//para usar a std


void ler_busca_codigo(){
    cout<< "\nInforme o codigo da pessoa a ser procurada: "<<endl;
}

void ler_remove_pessoa(){
    cout<< "\nInforme o codigo da pessoa a ser apagada: "<<endl;
}

void ler_insere_pessoa(){
    cout<< "\nInforme o codigo da pessoa e tecle enter: "<<endl;
    cout<< "\nInforme a idade da pessoa e tecle enter: "<<endl;
    cout<< "\ninforme o nome da pessoa e tecle enter: "<<endl;
}

int menu_principal(){

    int op = -1;
    cout<< "\n\n-------Menu Principal---------" <<endl;
    cout<< "\n1-Inserir pessoa\n2-Remover pessoa\n3-Consultar pelo código\n4-Listar todas\n5-Apagar hash\n6-Inserir aleatoriamente\n7-Salvar dados\n0-Sair"<< endl;
    cout << "\nInforme a opção desejada:"<<endl;
    cin >> op;
    return op;

}
