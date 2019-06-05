//Prog que lê um cria um aquivo e após lê o mesmo.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
	
int main(){
/*	CRIAR UM ARQUIVO.
	char string[80];	
	FILE * fp;
	fp = fopen("doc","w");
	//
	fgets(string,80,stdin);
	fprintf(fp,string);
	//
	fflush(fp);
	fclose(fp);
*/
/*	LER UM ARQUIVO
	char string[80];	
	FILE * fp;
	fp = fopen("doc","r");
	//
	fgets(string,80,fp);
	printf("%s",string);
	//
	fflush(fp);
	fclose(fp);
*/
/*	ESCREVE AO FIM DO FILE E ESCREVE VARIAS LINHAS
	char string[80];	
	FILE * fp;
	fp = fopen("doc","a");
	do {
	fgets(string,80,stdin);
	fprintf(fp,string);
	}while(strlen(string) != 1);
	//
	fflush(fp);
	fclose(fp);
*/
/*	LER VARIAS LINHAS DO FILE
	char string[80];
	FILE * fp;
	int i;
	if(!(fp = fopen("flores","r"))){	
	printf("Arquivo não encontrado!\n");
	return 0;
	}
	for(i = 0,fgets(string,79,fp);! feof(fp); fgets(string,79,fp),i++){
	printf("%s",string);
	}
	fflush(fp);
	fclose(fp);
*/
/*	LER QUALQUER ARQUIVO E VARIAS LINHAS DO FILE
	char string[80], Narc[20];
	FILE * fp;
	int i;
	fgets(Narc,20,stdin);
	Narc[strcspn(Narc,"\n")] = 0;
	if(!(fp = fopen(Narc,"r"))){
	printf("Arquivo não encontrado!\n");
	return 0;
	}
	for(i = 0,fgets(string,79,fp);! feof(fp); fgets(string,79,fp),i++){
	printf("%s",string);
	}
	fflush(fp);
	fclose(fp);
*/
}

