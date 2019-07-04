/*
Exercício U8.3 - Índice Remissivo
Número máximo de arquivos: 3
Tipo de trabalho: Trabalho individual
Exercício U8.3 - Índice Remissivo

Escreva um programa que produza o índice remissivo de um arquivo texto. O nome do arquivo a ser analisado
será fornecido pelo teclado. Cada palavra deve conter somente letras. Caracteres numéricos, espaços, tabs,
vírgulas etc devem ser considerados separadores de palavras. Além disto, todas as letras minúsculas devem
ser convertidas para maiúsculas. O índice remissivo deve se apresentar da seguinte forma: cada palavra 
encontrada deve ser apresentada em letra maiúscula, sucedida pelo caracter : + espaço + linha de ocorrência
+ vírgula + espaço + linha de ocorrência + vírgula + espaço + linha de ocorrência e assim por diante.

Por exemplo, o texto:

Edgar Allan Poe
The Black Cat

For the most wild,
yet most homely narrative which I am about to pen,
I neither expect nor solicit belief.

Deve produzir o seguinte resultado:

ABOUT: 5
ALLAN: 1
AM: 5
BELIEF: 6
BLACK: 2
CAT: 2
EDGAR: 1
EXPECT: 6
FOR: 4
HOMELY: 5
I: 5, 6
MOST: 4, 5
NARRATIVE: 5
NEITHER: 6
NOR: 6
PEN: 5
POE: 1
SOLICIT: 6
THE: 2, 4
TO: 5
WHICH: 5
WILD: 4
YET: 5

Seu programa deve, a cada palavra encontrada no texto, verificar se a mesma já fora encontrada. Caso 
ainda não tenha ocorrido, a mesma deve ser acrescentada à estrutura de dados do índice remissivo. 
Em linhas gerais, a estrutura de dados do índice é uma árvore binária não balanceada contendo as 
palavras (sem repetição) em ordem alfabética. Cada palavra possui uma lista encadeada com os números
das linhas onde a referida palavra ocorrera. Para uma dada palavra a lista de números de linha deve 
ser mantida em ordem crescente e não deve conter repetições.  Ao fim, seu programa deve gerar o índice
remissivo na tela do computador. Não deixe de liberar toda a memória alocada dinamicamente.
*/
