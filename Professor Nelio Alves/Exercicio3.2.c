#include <stdio.h>

/*

    Exercício 3.2:
    Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
    Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando
    essas informações conforme exemplo (use a palavra "in" para dentro do intervalo, e "out" para fora do intervalo).
    
    Exemplos:

    Entrada:    Saída:
    5           2 in
    14          3 out
    123        
    10
    -25
    32        
    
*/

void main()
{
    int n, x = 0, xIn = 0, xOut = 0;

    scanf("%d", &n);
    while (n > 0)
    {
        scanf("%d", &x);
        if (x >= 10 && x <= 20)
        {
            xIn++;
        }
        else
        {
            xOut++;
        }
        n--;
    }
    printf("%d in\n%d out", xIn, xOut);
}