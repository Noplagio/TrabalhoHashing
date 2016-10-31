#
include < iostream > #include < list >


 #define TAM 4

using namespace std;

pessoa pe;


class hash {

 public:
  list < pessoa > lista[TAM];
 hash();
 ~hash();
 int calcular_indice_hash(int codigo);
 void insere_pessoa_hash(pessoa p);
 void remove_pessoa_hash(int codigo);
 void consulta_hash(int codigo);
 void imprimi_hash();
 void salvar();
};


//reconstrutor
hash::hash() {

}

//destrutor
hash::~hash() {
 cout << "\nTodas as pessoas cadastradas foram deletadas!!\n";
 for (int i = 0; i < TAM; i++) {
  lista[i].clear();
 }
}

//realiza calculo para saber onde inserir on hash
int hash::calcular_indice_hash(int codigo) {
 int indice = codigo % TAM;
 return indice;
}

//insere pessoa no hash
void hash::insere_pessoa_hash(pessoa p) {
 int indice = calcular_indice_hash(p.get_codigo());
 lista[indice].push_back(p);
}

//remove pessoa do hash
void hash::remove_pessoa_hash(int codigo) {
 list < pessoa > ::iterator it;
 int indice = calcular_indice_hash(codigo);
 for (it = lista[indice].begin(); it != lista[indice].end(); it++) {
  //Procura o codigo do usuario num hashing especifico e o deleta.
  if (it -> get_codigo() == codigo) {
   cout << "Pessoa Deletada com sucesso!!.";
   lista[indice].erase(it);
   break;
  } else {
   cout << "\nEste código de pessoa nao existe!! Tente novamente!!\n";
  }
 }
}

//consulta o hash pelo codigo
void hash::consulta_hash(int codigo) {
 list < pessoa > ::iterator it;
 int indice = calcular_indice_hash(codigo);
 for (it = lista[indice].begin(); it != lista[indice].end(); it++) {
  //Procura o codigo do usuario num hashing especifico.
  if (it -> get_codigo() == codigo) {
   cout << "Resultado da consulta:";
   it -> imprimir_pessoa();
  } else {
   cout << "Registro Inexistente.";
  }
 }
}

//exibi no termial oque temos no hash
void hash::imprimi_hash() {

 list < pessoa > ::iterator it;
 for (int i = 0; i < TAM; i++) {
  for (it = lista[i].begin(); it != lista[i].end(); it++) {
   it -> imprimir_pessoa();
  }
 }
}

void hash::salvar() {
 //a.cria_arquivo();
}