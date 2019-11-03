#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

/* DEFINICOES DE DADOS */
struct navio
{
  string nome;
  float  carga;
  navio  *seg;
};

/* PROTOTIPOS DE FUNCOES */
int menu();
void navio_inclui  (navio *l);
void navio_remove  (navio *l);
void navio_imprime (navio *l);

int main()
{
  navio *l = new navio;
  l->seg = NULL;

  while (1)
  {
    switch ( menu() )
    {
      case 1: navio_inclui (l); break;
      case 2: navio_imprime(l); break;
      case 3: exit (1);

    }
  }
}

void navio_remove(navio *l)
{
  cout << "Digite nome navio a ser excluido: ";
  string nome_navio;
  cin >> nome_navio;
  // achar na lista o navio com o nome dado
  navio *p = l;
  while (p->seg && p->seg->nome!=nome_navio) p=p->seg;

  if (p->seg==NULL) cout << "Navio nao encontrado.\n";
  else
  {
    navio *aux = p->seg;
    p->seg = p->seg->seg;
    cout << aux->nome << "(" << aux->carga << ")\n";
    delete(aux);
  }
  system("pause");
}


