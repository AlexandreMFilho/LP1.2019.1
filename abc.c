#include <stdio.h>
#include <string.h>

void ler (char *destino);

char * converter (char * string);

int main(){
	
	char vetor[1000];
	char *pvet;
	vetor[0] ='\0';
	ler(vetor);
	pvet = converter(vetor);
	printf("vetor: %s \n \n ",pvet);
}

void ler(char * destino){
	char linha[100];
	linha[0] = '\0';

	do{
		gets(linha);
		strcat(destino," \n");
		strcat(destino,linha);
	}while(linha[0] != '\0');	
};


char * converter (char * string){
        int i = 0, j = 0;
        char modificada[(strlen(string)*2)], c;
        modificada[0] = '\0';
        c = string[i];
        while (string[i] != '\0' && i < strlen(modificada-1) && j < strlen(string-1)){
            switch(c){
                case '\n': modificada[j] ='\\'; j++; modificada[j] = 'n'; j++; break;
                case '\t': modificada[j] ='\\'; j++; modificada[j] = 't'; j++; break;
                case '\f': modificada[j] ='\\'; j++; modificada[j] = 'f'; j++; break;
                case '\v': modificada[j] ='\\'; j++; modificada[j] = 'v'; j++; break;
                case '\r': modificada[j] ='\\'; j++; modificada[j] = 'r'; j++; break;
                case ' ':  modificada[j] ='\\'; j++; break;
				default: modificada[j] = string[i]; i++; j++; break;
        }
    return modificada;
    }
};

