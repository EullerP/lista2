#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

struct Viagem
{
    float  distancia;
    float  consumo;
};

typedef Viagem arrayViagem[100];


float kmlitro(Viagem v1)
{
    float media, distancia, consumo;

    return (v1.distancia / v1.consumo);
}
int main()
{
    Viagem v1[100];

    for (int i = 0; i < 3; i++)
    {
        cout << "Digite a distancia: ";
        cin >> v1[i].distancia;
        cout << "Digite o consumo: ";
        cin >> v1[i].consumo;

        kmlitro(v1[i]);
        kmlitro(v1[i]);
        kmlitro(v1[i]);
    }

   for (int i=0;i<3;i++){
        cout<< "\n"<<"Distancia"<<i+1 <<": "<<v1[i].distancia<<"  "<<"Consumo:"<<v1[i].consumo<<" "<<"Media de consumo:"<<kmlitro(v1[i]);
    }
}
