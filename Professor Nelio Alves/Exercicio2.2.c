#include <stdio.h>
#include <math.h>

/*

    Exercício 2.2:
    Ler os valores dos três coeficientes "a", "b" e "c" de uma equação do segundo grau (􀀁􀀋􀀊 + 􀀍􀀋 + 􀀎 = 0)
    Em seguida, mostrar os valores das raízes da equação, conforme exemplos, usando a fórmula de Baskara (veja
    abaixo). Se a equação não possuir raízes (o valor de "a" não pode ser zero, e o valor de "delta" não pode ser
    negativo), mostrar uma mensagem "Impossivel calcular".
    
    Exemplos:

    Entrada: 10.0 20.1 5.1 
    Saída: 
        X1 = -0.29788
        X2 = -1.71212

    Entrada: 0.0 20.0 5.0 
    Saída: 
        Impossível calcular
    
    Entrada: 10.3 203.0 5.0 
    Saída: 
        X1 = -0.02466
        X2 = -19.68408
    
*/

void main()
{
    double a, b, c, delta;

    scanf("%lf %lf %lf", &a, &b, &c);
    delta = (b * b) - (4 * a * c);

    if (delta < 0 || a == 0)
    {
        printf("Impossivel calcular");
    }
    else
    {
        printf("X1 = %.5lf\n", (-(b) + sqrt(delta)) / (2 * a));
        printf("X2 = %.5lf\n", (-(b)-sqrt(delta)) / (2 * a));
    }
}