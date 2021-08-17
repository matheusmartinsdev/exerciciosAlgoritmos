#include <stdio.h>

#define PI 3.14159

/*

    Exercício 1.2:
    Faça um programa para ler o valor do raio de um círculo, e depois mostrar o valor da área deste círculo com quatro
    casas decimais conforme exemplos.

    Fórmula: area = pi.raio²
    Considere o valor de pi = 3.14159

    Exemplos:
    Entrada: 2.00 
    Saída: A=12.5664

    Entrada: 100.64 
    Saída: A=31819.3103

    Entrada: 150.00 
    Saída: A=70685.7750

*/

double calcAreaCirculo(double raio, double pi);

void main()
{
    double raio;

    printf("Raio: ");
    scanf("%lf", &raio);

    printf("A: %.4lf", calcAreaCirculo(raio, PI));
}

double calcAreaCirculo(double raio, double pi)
{
    return pi * (raio * raio);
}