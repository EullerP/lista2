#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

/* DEFINICOES DE DADOS */
struct item_pilha
{
  int chave;
  item_pilha *seg;
};

/* PROTOTIPOS DE FUNCOES */
int menu();
void pilha_inclui  (item_pilha *l);
bool pilha_remove  (item_pilha *l);
//void pilha_imprime (item_pilha *l);
//void pilha_topo    (item_pilha *l);
//void pilha_esvazia (item_pilha *l);

int main()
{
  item_pilha *l = new item_pilha;
  l->seg = NULL;

  while (1)
  {
    switch ( menu() )
    {
      case 1: pilha_inclui (l); break;
      case 2: pilha_remove (l);
              system ("pause");
              break;
//      case 3: pilha_topo   (l); break;
//      case 4: pilha_imprime(l); break;
//      case 5: pilha_esvazia(l); break;
      case 3: exit (1);
    }
  }
}

bool pilha_remove  (item_pilha *l)
{
  item_pilha *p = l;
  while (p->seg && p->seg->seg) p=p->seg;

  if (p->seg!=NULL)
  {
    item_pilha *aux = p->seg;
    p->seg = p->seg->seg;
    cout << aux->chave << " (" << aux << ")\n";
    free (aux);
    return true;
  }
  return false;
}
/*
void pilha_esvazia (item_pilha *l)
{
  while ( pilha_remove(l) );
}*/
/*
void pilha_imprime (item_pilha *l)
{
  cout << "impressao da pilha:\n";
  item_pilha *p = l->seg;
  while (p != NULL)
  {
    cout << p->chave << " (" << p << ")\n";
    p=p->seg;
  }
  system ("pause");
}*/
/*
void pilha_topo (item_pilha *l)
{
  item_pilha *p = l->seg;
  while (p!=NULL && p->seg!=NULL) p=p->seg;

  if (p!=NULL)
    cout << p->chave << " (" << p << ")\n";
  system ("pause");
}*/

void pilha_inclui (item_pilha *l)
{
  item_pilha *p = l;
  while (p->seg != NULL) p=p->seg;

  item_pilha *novo = new item_pilha;
  cout << "digite chave inteira: ";
  cin  >> novo->chave;
  novo->seg = NULL;
  p->seg = novo;
}

int menu()
{
  system ("cls");
  cout << "\t1-empilha\n";
  cout << "\t2-desempilha\n";
/*  cout << "\t3-exibir elemento topo\n";
  cout << "\t4-imprimir pilha\n";
  cout << "\t5-esvaziar pilha\n";
  cout << "\t6-sair do programa\n";
  cout << "\t\tdigite opcao: ";*/
  int c;
  cin >> c;
  return c;
}
