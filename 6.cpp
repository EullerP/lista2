#include <iostream>
#include <string>
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
      case 3: navio_remove (l); break;
      case 4: exit (1);
    }
  }
}

void navio_remove  (navio *l)
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
    cout << aux->nome << " (" << aux->carga << ")\n";
    free (aux);
  }
  system ("pause");
}

void navio_inclui (navio *l)
{
  navio *p = l;
  while (p->seg != NULL) p=p->seg;

  navio *novo = new navio;
  cout << "Digite nome navio: ";
  cin  >> novo->nome;
  cout << "Digite carga navio: ";
  cin  >> novo->carga;
  novo->seg = NULL;
  p->seg = novo;
}

void navio_imprime (navio *l)
{
  cout << "Impressao da fila de navios:\n";
  navio *p = l->seg;
  while (p != NULL)
  {
    cout << p->nome << " (" << p->carga << ")\n";
    p=p->seg;
  }
  system ("pause");
}

int menu()
{
  system ("cls");
  cout << "\t1-Insere navio\n";
  cout << "\t2-Imprime lista navios\n";
  cout << "\t3-Remove navio\n";
  cout << "\t4-Sair do programa\n";
  cout << "\t\tDigite opcao: ";
  int c;
  cin >> c;
  return c;
}
