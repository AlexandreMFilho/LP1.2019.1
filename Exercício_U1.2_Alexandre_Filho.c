/*
Exercício U1.2 - Conversão de binário (unsigned int) para decimal (sem sinal)
Número máximo de arquivos: 1
Tipo de trabalho: Trabalho individual
Exercício U1.2 - Conversão de binário para decimal sem sinal
Escreva um programa na linguagem C que leia uma string de tamanho qualquer contendo dígitos binários e imprima na tela
o valor decimal correspondente.

A leitura da entrada deve ser feita caracter a caracter usando a função getchar().

Escreva um programa na linguagem C que leia uma string de tamanho qualquer contendo dígitos binários e imprima na tela
o valor decimal correspondente.Escreva um programa na linguagem C que leia uma string de tamanho qualquer contendo
dígitos binários e imprima na tela o valor decimal correspondente.
*/

#include<stdio.h>
int  main()
{
    unsigned long int total, c;
    total = 0;
    c = '0';
    while(c == '1' || c =='0')
    {   
        if(c == '1')
        {
            total = (total * 2) + 1;
        }
        else if(c == '0')
        {
            total = (total * 2) + 0;
        }
        else
        {
            printf("Não foi possivel realizar a operacao.");
        }
        c = getchar();    
    }
    
    printf("%ld\n",total);
}
