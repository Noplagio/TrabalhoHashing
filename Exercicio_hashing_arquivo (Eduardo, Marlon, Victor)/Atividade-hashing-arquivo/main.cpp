#include <iostream>
#include "func_leitura.h"

using namespace std;

int main()
{
    int opcao = -1;
    carregar_dados();
    while (opcao != 0)
    {
        opcao = menu();

        switch(opcao)
        {
            case 0:
                cout << "saindo" << endl;
                salvar();
                break;
            case 1:
                inserir();
                break;
            case 2:
                remover();
                break;
            case 3:
                consultacod();
                break;
            case 4:
                consultanome();
                break;
            case 5:
                listar();
                break;
            case 6:
            	salvar();
				break;
            case 7:
                zerar_hash();
                break;
            case 8:
                inserir_aleatorio();
                break;
            default:
                cout << "Opção Invalida " << endl;
                break;
        }
    }
}
