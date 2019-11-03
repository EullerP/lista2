#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

struct triangulo
{
    float  base;
    float  altura;
    float area;
};

float calculaArea1(triangulo tri1){
    float area,base,altura;
        area = (tri1.base * tri1.altura)/2;
        return area;
}
float calculaArea2(triangulo tri2){
    float area,base,altura;
        area = (tri2.base * tri2.altura)/2;
        return area;
}
float calculaArea3(triangulo tri3){
    float area,base,altura;
        area = (tri3.base * tri3.altura)/2;
        return area;
}

int main()
{
    float maior, area1, area2, area3;

    triangulo tri1;
    triangulo tri2;
    triangulo tri3;

    cout << "Triangulo 1 \n";
    cout << "Digite a altura: ";
    cin >> tri1.base;
    cout << "Digite a largura: ";
    cin >> tri1.altura;

    cout << "Triangulo 2 \n";
    cout << "Digite a altura: ";
    cin >> tri2.base;
    cout << "Digite a largura: ";
    cin >> tri2.altura;

    cout << "Triangulo 3 \n";
    cout << "Digite a altura: ";
    cin >> tri3.base;
    cout << "Digite a largura: ";
    cin >> tri3.altura;

    calculaArea1(tri1);
    calculaArea2(tri2);
    calculaArea3(tri3);

    if (calculaArea1(tri1) >calculaArea2(tri2) && calculaArea1(tri1)>calculaArea3(tri3))
    {
        maior = calculaArea1(tri1);
        cout<<"O triangulo maior e o primeiro. Com area igual a: "<<maior;
    }
    else if (calculaArea2(tri2)> calculaArea1(tri1) && calculaArea2(tri2)>calculaArea3(tri3))
    {
        maior = calculaArea2(tri2);
         cout<<"O triangulo maior e o segundo:  Com area igual a: ";
    }
    else
        maior = calculaArea3(tri3);
        cout<<"O triangulo maior e o terceiro:  Com area igual a: "<<maior;
}


