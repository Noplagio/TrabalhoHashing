#include <iostream>
#include <locale.h>
/*
*Fun��o destinada as leiuras que o programa realiza
*/

using namespace std;//para usar a std

int menu_principal(){

    int op = -1;
    cout<< "-------Menu Principal---------" <<endl;
    cout<< "\n1-Inserir pessoa\n2-Remover pessoa\n3-Consultar pelo c�digo\n4-Listar todas\n5-Apagar hash\n6-Inserir aleatoriamente\n7-Salvar dados\n0-Sair"<< endl;
    cout << "\nInforme a op��o desejada:"<<endl;
    cin >> op;
    return op;

}
