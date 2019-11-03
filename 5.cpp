#include<iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct contato
{
    string nome;
    //string email;
    long telefone;
    contato *seg;
};

int menu();
void insere (contato *l);
void imprime  (contato *l);
void Busca (contato *l);
void BuscaERemove (contato *l);

void insere(contato c, contato *l)
{
    contato *n = new contato;
    n->nome=c.nome;
    n->telefone=c.telefone;
    n->seg=l->seg;
    l->seg-n;
}
void imprime(contato *lst2)
{
    contato *p;
    p = lst2->seg;
    cout << "-- Inicio impressao de contatos --";
    while(p!=NULL)
    {
        cout << "nome.: " << p->nome << "\n";
        cout << "tel.: " << p->telefone << "\n";
        p=p->seg;
    }
}
Busca (int x, contato *lst)
{
    contato *p;
    p = lst->seg;


    while (p != NULL && p->contato != x)
        p = p->seg;
    return p;
}
void BuscaERemove (int x, contato *lst)
{
    contato *p, *q;
    p = lst;
    q = lst->seg;
    while (q != NULL && q->contato != x)
    {
        p = q;
        q = q->seg;
    }
    if (q != NULL)
    {
        p->seg = q->seg;
        free (q);
    }
}
int menu()
{
    system ("cls");
    cout << "\t1-Insere contato\n";
    cout << "\t2-Imprime lista contatos\n";
    cout << "\t3-Remove contato\n";
    cout << "\t4-Sair do programa\n";
    cout << "\t\tDigite opcao: ";
    int c;
    cin >> c;
    return c;
}

int main()
{
    contato *l = new contato;
    l->seg = NULL;

    while (1)
    {
        switch ( menu() )
        {
        case 1:
            insere (l);
            break;
        case 2:
            imprime(l);
            break;
        case 3:
            Busca (l);
            break;
        case 4:
            BuscaERemove  (l);
            break;
        case 5:
            exit (1);

        }
    }
}

