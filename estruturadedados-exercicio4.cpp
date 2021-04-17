#include <stdio.h>

int main() {

	char phrase[100], pilha[100], out[100];
	int i = 0, j = 0, top = -1;

	phrase[0] = 'W';
	phrase[1] = 'E';
	phrase[2] = 'S';
	phrase[3] = 'L';
	phrase[4] = 'E';
	phrase[5] = 'Y';
	phrase[6] = '.';
	
	do 
	{
		if(phrase[i] != ' ' && phrase[i] != '.') 
		{
			if (top < 100)
			{
				pilha[++top] = phrase[i++];	
			}
		}
		else 
		{
			while(top >= 0)
			{
				out[j++] = pilha[top--];	
			}

			out[j++] = phrase[i++];
		}

	}while(phrase[i] != '\0');

	out[j] = '\0';

	printf("\nFrase: %s\nSaida: %s\n", phrase, out);
	
	return 0;
}
