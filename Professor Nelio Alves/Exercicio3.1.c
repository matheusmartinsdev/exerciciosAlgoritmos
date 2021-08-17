#include <stdio.h>

/*

    Exercício 3.1:
    Ler os valores dos três coeficientes "a", "b" e "c" de uma equação do segundo grau (􀀁􀀋􀀊 + 􀀍􀀋 + 􀀎 = 0)
    Em seguida, mostrar os valores das raízes da equação, conforme exemplos, usando a fórmula de Baskara (veja
    abaixo). Se a equação não possuir raízes (o valor de "a" não pode ser zero, e o valor de "delta" não pode ser
    negativo), mostrar uma mensagem "Impossivel calcular".
    
    Exemplos:

    Entrada:    Saída:
    2200        Senha Invalida
    1020        Senha Invalida
    2022        Senha Invalida
    2002        Acesso Permitido
    
*/

void main()
{
    int senha;

    do
    {
        scanf("%d", &senha);
        if (senha != 2002)
        {
            printf("Senha Invalida\n");
        }
        else
        {
            printf("Acesso Permitido\n");
        }
    } while (senha != 2002);
}