Exercício U8.1 - Soma de polinômios
Número máximo de arquivos: 1
Tipo de trabalho: Trabalho individual
Exercício U8.1 - Soma de polinômios
Faça um programa que some dois polinômios de qualquer ordem e número de termos. Os polinômios são fornecidos através do stdin, o primeiro corresponde à primeira linha fonecida por este canal e o segundo vetor à segunda linha. O formato dos polinômios é o seguinte:
TAMANHO COEF1 EXP1 COEF2 EXP2 ... COEF2 EXP2
onde TAMANHO corresponde ao número de Termos do polinômio, COEF1 ... COEFN correspondem aos coeficientes e EXP1...EXPN aos expoentes dos termos.
Exemplo:
4 2.5 5 1.5 4 1.0 3 5.0 0
onde o primeiro 4 indica que o polinômio tem quatro termos e os outros valores correspondem respectivamente aos coeficientes e expoentes de cada termo.  Este exemplo é equivalente ao polinômio: P(x) = 2.5 x^5 + 1.5 x^4 1.0 x^3 + 5 x^0 

O polinômio resultado da soma dos dois primeiro deve ser enviado para o stdout na mesma codificação. Caso o polinômio resutantes da soma tenha algum coeficiente igual a zero, o respectivo nó da lista encadeada não deve ser retirado da lista.

Requisitos que precisam ser atendidos:
1) Caso os polínômio esteja vazio o programa deve escrever na tela a mensagem:
"Polinomio vazio!\n"
2) Os polinômios devem ser amazenados numa lista encadeada.
3) Após o uso, a memória alocada dinanmicamente deve ser liberada.

OBS.: O não atendimento ao requisito 2) na nota zero.

OBS2.: Não escreva nenhuma mensagem na tela pedindo dados de entrada.
