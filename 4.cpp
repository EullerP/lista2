#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

struct Produto
{
  string nome;
  float preco;
  int estoque;
};

typedef Produto arrayViagem[10];

int main()
{
    Produto prod[3];

    float caro, barato;

    for (int i = 0; i < 3; i++)
    {
        cout << "Digite o nome do produto: ";
        cin >> prod[i].nome;
        cout << "Digite o preco do produto: ";
        cin >> prod[i].preco;
        cout << "Digite a quantidade em estoque: ";
        cin >> prod[i].estoque;

        caro = prod[i].preco;//pegar posicao do ellemento
        barato = prod[i].preco;//pegar posicao do ellemento

        if(prod[i].preco && prod[i+1].preco && prod[i].preco[i+3])
        {
                caro = prod[i].preco;
        }
        else if(prod[i+1].preco && prod[i+1].preco && prod[i].preco[i+3])
        {
                caro = prod[i].preco;
        }
        else
        {
                caro = prod[i].preco;
        }
    }
    cout << "O produto mais caro é" << prod[i].nome << "preço: " << prod[i].preco << "estoque: " << prod[i].estoque;
    cout << "O produto mais barato é" << prod[i].nome << "preço: " << prod[i].preco << "estoque: " << prod[i].estoque;
}
