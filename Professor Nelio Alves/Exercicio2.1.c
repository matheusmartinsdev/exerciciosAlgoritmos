#include <stdio.h>

/*

    Exercício 2.1:
    Com base na tabela de preços ao lado, faça
    um programa que leia o código de um item e a
    quantidade deste item. A seguir, calcule e
    mostre o valor da conta a pagar.

    COD    ESPECIFICAÇÃO        PREÇO
    1      Cachorro Quente      R$ 4.00
    2      X-Salada             R$ 4.50
    3      X-Bacon              R$ 5.00
    4      Torrada Simples      R$ 2.00
    5      Refrigerante         R$ 1.50
    
    Exemplos:

    Entrada: 3 2 
    Saída: "Total: R$ 10.00"

    Entrada: 2 3 
    Saída: "Total: R$ 13.50"

*/

double calcAreaCirculo(double raio, double pi);

void main()
{
    float preco;
    int opcao, quant;

    scanf("%d %d", &opcao, &quant);

    switch (opcao)
    {
    case 1:
        preco = 4.00;
        break;

    case 2:
        preco = 4.50;
        break;

    case 3:
        preco = 5.00;
        break;

    case 4:
        preco = 2.00;
        break;

    case 5:
        preco = 1.50;
        break;
    }

    printf("Total: R$ %.2f", quant * preco);
}