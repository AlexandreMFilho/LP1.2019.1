	
	//A recursao funciona da seguinte forma; Você acredita que irá funcionar a chamada recursiva e segue com a função
	//cuida do caso base mas NÃO esqueça o caso particular.


	/*Exercício 2 de Recursao do Abelha.
	Faça uma função recursiva que imprima de trás para a frente o conteúdo de uma string.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/*
char print_tras_frente (char *);

int main(){
	char *pa;
	char a[100];
	/*a[0] = 'A';
	a[1] = 'l';
	a[2] = 'e';
	a[3] = 'x';
	a[4] = 'a';
	a[5] = 'n';
	a[6] = 'd';
	a[7] = 'r';
	a[8] = 'e';
	a[9] = '\0';
	scanf("%s",a);
	printf("A string é : %s\n",a);
	pa = &a[0];
	print_tras_frente(pa);
	printf("\n");
}
char print_tras_frente (char *a){
	char c;
	if (*(a+1) != '\0'){
		c = print_tras_frente(a+1);
		printf("%c",*a);
	}else{
	printf("%c",*a);
	return *a;
	}
}*/
	

	/*Exercício 3 – Conversão Arquivo Texto para Binário
	Faça uma função recursiva imprima uma string
equivalente ao valor octal do número inteiro fornecido
como entrada para sua função.*/
/*
int trasf_octal (int);

int main(){
	
	int x,k;
	scanf("%d",&x);
	printf("%d\n",trasf_octal (x));
	
}
	
int trasf_octal (int num){
	if (num >0, num <8){
		return num;
	}else{
		return (trasf_octal(num/8)*10)+(trasf_octal((num)%8));
	}

}*/

