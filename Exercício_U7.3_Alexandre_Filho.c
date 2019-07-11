Exercício U7.3 - Soma de duas matrizes com elementos alocados de forma contínua
Número máximo de arquivos: 1
Tipo de trabalho: Trabalho individual
Faça um programa que some duas matrizes de números reais com L x C dimensões. As matrizes são fornecidas através do stdin, a primeira matriz corresponde à primeira linha fonecida por este canal e a segundA vetor à segunda linha. O formato de codificação das matrizes é o seguinte:
L C ELEMENTO1_1 ELEMENTO1_2 ... ELEMENTO1_C ... ELEMENTO2_1 ... ELEMENTO_L_C
onde L corresponde ao número de linhas da matriz, C ao número de colunas da matriz e ELEMENTOi_j representa o elemento (i,j) da matriz.
Exemplo:
2 3 1.0 2.0 3.0 4.0 5.0 6.0
onde o valor 2 indica que a matriz tem 2 linhas, o valor inteiro 3 fornece o número de colunas da matriz e outros valores correspondem respectivamente aos elementos da matriz em sequência de linha após linha.  

A matriz soma deve ser enviada para o stdout na mesma codificação.

Requisitos que precisam ser atendidos:
1) Caso os as matrizes tenham dimensões distintas elas não devem ser somadas e o programa deve escrever na tela a mensagem ""Erro: as matrizes tem que ter as mesmas dimensoes\n"
2) As matrizes devem ser alocadas dinamicamente e seus elementos devem ocupar posições contínuas de memória
3) Após o uso a memória alocada dinamicamente deve ser liberada.
4) Não é permitido utilizar o operador de índice do vetor [indice] ao invés disto use aritmética de ponteiros

OBS.: O não atendimento aos requisitos 2) e 4) acarretará na nota zero.

OBS2.: Não escreva nenhuma mensagem na tela pedindo dados de entrada.
