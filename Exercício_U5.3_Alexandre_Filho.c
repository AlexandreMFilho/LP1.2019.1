Exercício U5.3 - Produto Escalar
Número máximo de arquivos: 5
Tamanho máximo de arquivo carregado: 1 MiB
Tipo de trabalho: Trabalho individual
Exercício 5.3 - Produto Escalar
    Escreva um programa organizado em múltiplos arquivos que calcule de forma recursiva o produto escalar entre dois vetores. Os vetores devem ser lidos a partir de arquivos de texto e terão no máximo 50 elementos.

    No caso dos vetores terem tamanho diferente seu programa deve apresentar a mensagem de erro "Erro: os vetores possuem comprimentos distintos\n". No caso do primeiro arquivo ser inexistente, seu programa deve imprimir "Erro: arquivo do vetor 1 não foi encontrado\n". Uma mensagem análoga deve ser emitida no caso de erro com o vetor 2.

    Os arquivos de entrada deverão ter o seguinte formato: a primeira linha contém o número de elementos do vetor; cada uma das demais linhas do arquivo contém um número real referente a um dos elementos do vetor. Exemplos de arquivos podem ser encontrados nos arquivos vet1.txt e vet2.txt

- Organização do programa:

vetinput.h e vetinput.c:
     Respectivamente o protótipo e a implementação da função que lê o vetor no formato de arquivo texto, apresentado nos exemplos. O nome do arquivo deve necessariamente ser um parâmetro da função.

escalar.h e escalar.c:
    Respectivamente o protótipo e a implementação da função que calcula recursivamente o produto escalar.

main.c:
    Programa de teste que deve ler o nome de dois arquivos (um de cada vez), ler seus vetores, calcular o produto escalar de forma recursiva e apresentar o resultado com 3 casas decimais.

   Atenção, a função do cálculo do produto escalar deverá ser recursiva. 
