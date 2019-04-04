/*
Exercício U1.1 -Tabela de temperatura Célsius -> Fahrenheit usando o laço for
Número máximo de arquivos: 1
Tipo de trabalho: Trabalho individual
Exercício U1.1 -Tabela de temperatura Célsius -> Fahrenheit usando o laço for
Faça uma tabela com as temperaturas em graus Célsius e Fahrenheit. Os valores em Célsius são -10, 0, 10, 20, 30, 40, 50. A cada linha na tela seu programa deve imprimir a temperatura em graus Célsius, caracter de tabulação e a temperatura em Fahrenheit. As temperaturas deve ser armazenadas usando o tipo float e devem ser apresentadas com duas casas decimais, para isso é necessário usar a formatação "%.2f".

Nas estruturas de repetição, somente é permitido utilizar o comando for.
*/

#include<stdio.h>

int main()
{
	float fahr,celsius;
	
	#define inicio -10
	#define fim 50
	#define incr 10

	celsius = inicio;

	while(celsius <= fim)
	{
		fahr = (((celsius*9.0)/5.0)+32.0);
		printf("%8.2f %10.2f \n",celsius,fahr);
		celsius = celsius + incr;
	}
}
