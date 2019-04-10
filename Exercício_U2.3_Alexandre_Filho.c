/*
Exercício U2.3 - Palíndromo
Número máximo de arquivos: 1
Tipo de trabalho: Trabalho individual
Exercício U2.3 Palíndromo

Crie um programa que receba através do canal de entrada default uma string e teste se esta é um palíndromo. Caso a string lida seja um palíndromo escreva na tela a palavra SIM (coloque um '\n' no final "SIM\n"), caso contrário, escreva NAO. (coloque um '\n' no final "NAO\n")
 
Obs.: Para ler uma palavra pelo teclado use a função fgets ( char * str, int num, FILE * stream) (onde o parâmetro stream deve receber o identificador stdin) e para saber o comprimento da string use a função strlen(char* str)

Não desperdice memória, portanto não faça cópia da string ou mesmo de parte dela.
*/

#include<stdio.h>
#include<string.h>

int main(){
int len, cont, i;
i = cont = 0;
char vet[100];
scanf("%s",vet);
len = strlen(vet);
int x = len;
                          //printf("x : %d\n", x);
char ap1, ap2;
	
for (i = 0; i <= (x/2); i++){
	
	ap1 = vet[i];
	ap2 = vet[(x-i)-1];

	                        //printf(" i : %d ap1 : %c  ap2 : %c\n",i,ap1,ap2);

	if (ap1 != ap2){
	cont = cont +1;
	}
}
                          //printf ("Cont : %d", cont);
if (cont == 0){
printf("SIM\n");
}
else{
printf("NAO\n");
}
}
