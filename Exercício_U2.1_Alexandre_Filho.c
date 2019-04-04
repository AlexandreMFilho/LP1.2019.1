/*
Exercício U2.1 -Tamanho dos tipos primitivos da linguagem C
Número máximo de arquivos: 1
Tamanho máximo de arquivo carregado: 256 KiB
Tipo de trabalho: Trabalho individual
Exercício U2.1 -Tamanho dos tipos primitivos da linguagem C
Faça um programa que imprima os tamanhos dos tipos primitivos da linguagem C, para isso use a função sizeof().

Exemplo: printf("O tamanho de um (char) é de %ld byte(s)\n", sizeof(char));

Os tamanhos devem ser impresso na seguinte ordem:

char,
short,
int,
long,
long long,
float,
double,
long double.
*/

#include<stdio.h>
int main()
{
    printf("%d ", sizeof(char));
    printf("%d ", sizeof(short));
    printf("%d ", sizeof(int));
    printf("%d ", sizeof(long));
    printf("%d ", sizeof(long long));
    printf("%d ", sizeof(float));
    printf("%d ", sizeof(double));
    printf("%d ", sizeof(long double));
    return 0;
}

