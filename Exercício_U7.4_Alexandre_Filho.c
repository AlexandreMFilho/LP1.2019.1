Exercício U7.4 - PRODUTO de duas matrizes com elementos alocados de forma FRAGMENTADA
Número máximo de arquivos: 1
Tipo de trabalho: Trabalho individual
Faça um programa que multiplique duas matrizes de números reais com L1 x C1 e L2 x C2 dimensões respectivamente. As matrizes são fornecidas através do stdin, a primeira matriz corresponde à primeira linha fonecida por este canal e a segunda à segunda linha. O formato de codificação das matrizes é o seguinte:
L C ELEMENTO1_1 ELEMENTO1_2 ... ELEMENTO1_C ... ELEMENTO2_1 ... ELEMENTO_L_C
onde L corresponde ao número de linhas da matriz, C ao número de colunas da matriz e ELEMENTOi_j representa o elemento (i,j) da matriz.
Exemplo:
2 3 1.0 2.0 3.0 4.0 5.0 6.0
onde o valor 2 indica que a matriz tem 2 linhas, o valor inteiro 3 fornece o número de colunas da matriz e outros valores correspondem respectivamente aos elementos da matriz em sequência de linha após linha.  

A matriz produto deve ser enviada para o stdout na mesma codificação.

Requisitos que precisam ser atendidos:
1) Caso os as matrizes tenham dimensões que não permitam às exigências de produto de matrizes elas não devem ser somadas e o programa deve escrever na tela a mensagem "Erro: dimensões incompatíveis, o número de colunas da matriz 1 deve ser igual ao número de linhas da matrix 2.\n"
2) As matrizes devem ser alocadas dinamicamente e cada linha deve ser alocada em um malloc distinto, o que corresponde à técnica de alocação fragmentada por linha apresentada em sala.
3) Após o uso a memória alocada dinamicamente deve ser liberada.
4) Não é permitido utilizar aritmética de ponteiros, nem tampouco o operador * como indireção. Ao invés disto, use o operador de índice da array Mat[linha][coluna].

OBS.: O não atendimento aos requisitos 2) e 4) acarretará na nota zero.

OBS2.: Não escreva nenhuma mensagem na tela pedindo dados de entrada.
