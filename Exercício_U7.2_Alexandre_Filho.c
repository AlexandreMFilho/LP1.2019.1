Exercício U7.2 - Soma de dois vetores n-dimensionais
Número máximo de arquivos: 1
Tipo de trabalho: Trabalho individual
Exercício U7.2 - Soma de dois vetores
Faça um programa que some dois vetores de números reais com n dimensões. Os vetores são fornecidos através do stdin, o primeiro corresponde à primeira linha fonecida por este canal e o segundo vetor à segunda linha. O formato dos vetores é o seguinte:
TAMANHO VALOR1 VALOR2 VALOR3 ... VALORN
onde TAMANHO corresponde ao número de elementos do vetor e VALOR1 ... VALORN correspondem aos valores dos elementos do vetor.
Exemplo:
4 1.0 2.0 3.0 4.0
onde o primeiro 4 indica que o vetor tem quatro dimensões e os outros valores correspondem respectivamente aos elementos do vetor.  

O vetor soma deve ser enviado para o stdout na mesma codificação.

Requisitos que precisam ser atendidos:
1) Caso os vetores tenham dimensões distintas eles não devem ser somados e o programa deve escrever na tela a mensagem "Erro: os vetores tem que ter o mesmo tamanho\n"
2) Os vetores devem ser alocados dinamicamente
3) Após o uso a memória alocada dinanmicamente deve ser liberada.
4) Não é permitido utilizar o operador de índice do vetor [indice] ao invés disto use aritmética de ponteiros

OBS.: O não atendimento aos requisitos 2) e 4) acarretará na nota zero.

OBS2.: Não escreva nenhuma mensagem na tela pedindo dados de entrada.
