#include <stdio.h>

/*

Exercício 1.1:
Fazer um programa para ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o
código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Calcule e mostre o valor a ser pago.

Exemplos:
    Entrada: 
    12 1 5.30
    16 2 5.10

    Saída:
    VALOR A PAGAR: R$ 15.50

    Entrada:
    13 2 15.30
    161 4 5.20

    Saída:
    VALOR A PAGAR: R$ 51.40

    Entrada:
    1 1 15.10
    2 1 15.10

    Saída:
    VALOR A PAGAR: R$ 30.20

*/

float calcTotal(int qtd, float val);

void main()
{
    int cod1, cod2, qtd1, qtd2;
    float val1, val2;

    scanf("%d %d %f", &cod1, &qtd1, &val1);
    scanf("%d %d %f", &cod2, &qtd2, &val2);

    printf("VALOR A PAGAR: R$ %.2f", calcTotal(qtd1, val1) + calcTotal(qtd2, val2));
}

float calcTotal(int qtd, float val)
{
    return qtd * val;
}