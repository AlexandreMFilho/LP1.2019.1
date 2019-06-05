/*
	P1 	P4 	.pbm 	0–1 (white & black)
	P2 	P5 	.pgm 	0–255 (gray scale)
	P3 	P6 	.ppm 	0–255 (RGB) (colorido)

	P2
	# A diagonal line 10 pixels wide and 10 pixels high
	10 10
	255
		 0  255 255 255 255 255 255 255 255 255
		255  0  255 255 255 255 255 255 255 255
		255 255  0  255 255 255 255 255 255 255
		255 255 255  0  255 255 255 255 255 255
		255 255 255 255  0  255 255 255 255 255
		255 255 255 255 255  0  255 255 255 255
		255 255 255 255 255 255  0  255 255 255
		255 255 255 255 255 255 255  0  255 255
		255 255 255 255 255 255 255 255  0  255
		255 255 255 255 255 255 255 255 255  0
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

char string[80], Narc[20];
int imagem[150];
	FILE * fp;
	int i;
	fgets(Narc,20,stdin);
	Narc[strcspn(Narc,"\n")] = 0;
	if(!(fp = fopen(Narc,"r"))){
	printf("Arquivo não encontrado!\n");
	return 0;
	}
	for(fscanf(fp,"%d",&imagem);! feof(fp); fscanf(fp,"%d",&imagem)){
	}
	printf("%*d\n",*imagem);
	fflush(fp);
	fclose(fp);
}

