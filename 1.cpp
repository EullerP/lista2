#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

struct retangulo
{
    float  altura;
    float  largura;
    float  area1;
    float  area2;
};

int main()
{
    //float area1, area2;
    retangulo ret1;
    retangulo ret2;

    cout << "Retangulo 1 \n";
    cout << "Digite a altura: ";
    cin >> ret1.altura;
    cout << "Digite a largura: ";
    cin >> ret1.largura;
    ret1.area1 = ret1.altura * ret1.largura;

    cout << "Retangulo 2 \n";
    cout << "Digite a altura: ";
    cin >> ret2.altura;
    cout << "Digite a largura: ";
    cin >> ret2.largura;
    ret2.area2 = ret2.altura * ret2.largura;

    cout << "Area1; " << ret1.area1 << "\n";
    cout << "Area2; " << ret2.area2 << "\n";
}
