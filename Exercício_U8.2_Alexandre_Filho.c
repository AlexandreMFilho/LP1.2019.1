Exercício U8.2 - Índice Remissivo das palavras reservadas de um programa C
Número máximo de arquivos: 3
Tipo de trabalho: Trabalho individual
Exercício U8.2 - Índice Remissivo das palavras reservadas de um programa C
Escreva um programa que produza o índice remissivo de um programa C. No índice remissivo devem constar somente as palavras reservadas da linguagem C.

O nome do programa C a ser analisado será fornecido pelo teclado. Cada palavra deve conter somente letras. Caracteres numéricos, espaços, tabs, vírgulas operadores matemáticos devem ser considerados separadores de palavras. O índice remissivo deve se apresentar da seguinte forma: cada palavra reservada presente no arquivo de entrada, sucedida pelo caracter : + caracter <enter> + linha de ocorrência + vírgula + espaço + linha de ocorrência + vírgula + espaço + linha de ocorrência e assim por diante e por fim um caracter <enter>.

A estrutura de dados principal do índice remissivo é uma lista encadeada das palavras reservadas. Cada palavra, por sua vez, deve conter uma sublista encadeada (sem duplicação) com os números de linhas em que estas ocorrem.

Por exemplo, o programa:

 1: #include<stdio.h>
 2: int main (void)
 3: {
 4:  int i = 0;
 5:  for (i = 1; i<10; i++)
 6:     printf("%d\n", i);
 7:  return 0;
 8: }

Deve produzir o seguinte resultado:
for:
5 
int:
2, 4
return:
7
void:
2
Cada ocorrência de palavra reservada gera uma nova entrada na respectiva sublista de ocorrências armazenando o número da linha. Palavras reservadas que não constem do arquivo de entrada não devem ser listadas nem tampouco os números de linha nos quais uma palavra reservada se repita devem ser duplicados. No relatório, as palavras devem aparecer em ordem alfabética e os números de linha em ordem crescente.

Não deixe de liberar toda a memória alocada dinamicamente.
É obrigatória a subdivisão do trabalho em três arquivos:
library.h library.c e main.c
