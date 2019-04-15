#include <stdio.h>
#include <string.h>

int main()
{
	int Tamanho_Octal, i, j, k, p, len;
	i = 0;	j = 0; k = 0; len = 0;

	char octal[100];	//Cria o array a ser armazenada a entrada (N. octal).
	scanf("%s", octal); //Atribui a entrada ao array octal.

	len = strlen(octal); //Armazena o tamanho da entrada.
	Tamanho_Octal = len;
	char binario[((3 * Tamanho_Octal) + 1)]; //Cria o array a ser armazenado o valor binarios convertido de octal.
	int Tamanho_Binario = strlen(binario);   //Armazena o tamanho do array binario (octal -> binario 3 digitos).

	char aux_hexa[((3 * Tamanho_Octal) + Tamanho_Octal + 1)]; //Cria o array auxiliar onde estará o numero binário que será convertido em hexa.

	int Tamanho_Hexa = ((strlen(aux_hexa)-1) / 4); //Armazena o tamanho necessário para o array hexa.
	char hexa[Tamanho_Hexa + 1];			   //Cria o array onde estara armazenado a conversão do binario para hexa.

	//Converte o numero Octal preenchendo um array com seus valores binarios.
	for (i = 0; i <= Tamanho_Octal; i++)
	{

		if (octal[i] == '0')
			{ //000
			binario[(3*i)]		= '0';
			binario[(3*i)+1]	= '0';
			binario[(3*i)+2]	= '0';
			}
		else if (octal[i] == '1')
			{ //001
			binario[(3*i)]		= '0';
			binario[(3*i)+1]	= '0';
			binario[(3*i)+2]	= '1';
			}
		else if (octal[i] == '2')
			{ //010
			binario[(3*i)]		= '0';
			binario[(3*i)+1]	= '1';
			binario[(3*i)+2]	= '0';
			}		
		else if (octal[i] == '3')
			{ //011
			binario[(3*i)]		= '0';
			binario[(3*i)+1]	= '1';
			binario[(3*i)+2]	= '1';
			}
		else if (octal[i] == '4')
			{ //100
			binario[(3*i)]		= '1';
			binario[(3*i)+1]	= '0';
			binario[(3*i)+2]	= '0';
			}
		else if (octal[i] == '5')
			{ //101
			binario[(3*i)]		= '1';
			binario[(3*i)+1]	= '0';
			binario[(3*i)+2]	= '1';
			}
		else if (octal[i] == '6')
			{ //110
			binario[(3*i)]		= '1';
			binario[(3*i)+1]	= '1';
			binario[(3*i)+2]	= '0';
			}
		else if (octal[i] == '7')
			{ //111
			binario[(3*i)]		= '1';
			binario[(3*i)+1]	= '1';
			binario[(3*i)+2]	= '1';
			}

	}
	//binario[i] = '\0';

	//Coloca os 0's no auxiliar para conversão em HEXA.
	for (j = 0; j <= (Tamanho_Octal); j++)
	{ //A quantidade de digitos da entrada é = a quantidade de 0's a ser adicionado.
		aux_hexa[j] = '0';
	}

	//Coloca no array aux_hexa os a array com o numero convertido para binario, para divisão e conversao p/ hexa.
	for (p = 0; p <= Tamanho_Binario; p++)
	{
		aux_hexa[(p + Tamanho_Octal)] = binario[p]; //Preenche o array aux_hexa com os binarios de 3 digitos.
	}

	//Pega os valores binarios do auxiliar e converte em Hexa no Vetor hexa.
	for (k = 0; k <= Tamanho_Hexa; k++)
	{

		if (aux_hexa[(4 * k)] == '0')
		{ //0xxx

			if (aux_hexa[(4 * k) + 1] == '0')
			{ //00xx

				if (aux_hexa[(4 * k) + 2] == '0')
				{ //000x

					if (aux_hexa[(4 * k) + 3] == '0')
					{
						hexa[k] = '0'; //0000
					}
					else if (aux_hexa[(4 * k) + 3] == '1')
					{
						hexa[k] = '1'; //0001
					}
				}
				else if (aux_hexa[(4 * k) + 2] == '1')
				{ //001x
					if (aux_hexa[(4 * k) + 3] == '0')
					{ //0010
						hexa[k] = '2';
					}
					else if (aux_hexa[(4 * k) + 3 == '1'])
					{ //0011
						hexa[k] = '3';
					}
				}
			}
			else if (aux_hexa[(4 * k) + 1] == '1')
			{ //01xx
				if (aux_hexa[(4 * k) + 2] == '0')
				{ //010x
					if (aux_hexa[(4 * k) + 3] == '0')
					{ //0100
						hexa[k] = '4';
					}
					else if (aux_hexa[(4 * k) + 3] == '1')
					{ //0101
						hexa[k] = '5';
					}
				}
				else if (aux_hexa[(4 * k) + 2] == '1')
				{ //011x
					if (aux_hexa[(4 * k) + 3] == '0')
					{ //0110
						hexa[k] = '6';
					}
					else if (aux_hexa[(4 * k) + 3] == '1')
					{ //0111
						hexa[k] = '7';
					}
				}
			}
		}
		if (aux_hexa[(4 * k)] == '1')
		{ //1xxx

			if (aux_hexa[(4 * k) + 1] == '1')
			{ //11xx

				if (aux_hexa[(4 * k) + 2] == '1')
				{ //111x

					if (aux_hexa[(4 * k) + 3] == '1')
					{
						hexa[k] = 'F'; //1111
					}
					else if (aux_hexa[(4 * k) + 3] == '1')
					{
						hexa[k] = 'E'; //1110
					}
				}
				else if (aux_hexa[(4 * k) + 2] == '0')
				{ //110x
					if (aux_hexa[(4 * k) + 3] == '1')
					{ //1101
						hexa[k] = 'D';
					}
					else if (aux_hexa[(4 * k) + 3 == '0'])
					{ //1100
						hexa[k] = 'C';
					}
				}
			}
			else if (aux_hexa[(4 * k) + 1] == '0')
			{ //10xx
				if (aux_hexa[(4 * k) + 2] == '1')
				{ //101x
					if (aux_hexa[(4 * k) + 3] == '1')
					{ //1011
						hexa[k] = 'B';
					}
					else if (aux_hexa[(4 * k) + 3] == '0')
					{ //1010
						hexa[k] = 'A';
					}
				}
				else if (aux_hexa[(4 * k) + 2] == '0')
				{ //100x
					if (aux_hexa[(4 * k) + 3] == '1')
					{ //1001
						hexa[k] = '9';
					}
					else if (aux_hexa[(4 * k) + 3] == '0')
					{ //1000
						hexa[k] = '8';
					}
				}
			}
		}
		/*if (aux_hexa[k*4] == '\0'){
			hexa[k] == '';
		}*/
		//hexa[k] = '\0';
	}
	printf("aux-hexa :" "%s",aux_hexa);
	printf("%s\n", binario);
	printf("%s\n", hexa);
}
