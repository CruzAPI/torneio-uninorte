#include <iostream>


int main()
{
	int size = 5;
	int vector[size];
	int ordened[size];
	
	vector[0] = 3;
	vector[1] = 5;
	vector[2] = 1;
	vector[3] = 4;
	vector[4] = 2;
	
	for(int i = 0; i < size; i++)
	{
		std::cout << vector[i];
	}
	
	int maior = 0;
	int maiorIndex = -1;
	
	int menor = 10000;
	int menorIndex = -1;
	
	for(int i = 0; i < size; i++)
	{
		if(vector[i] >= maior)
		{
			maior = vector[i];
			maiorIndex = i;
		}
		
		if(vector[i] <= menor)
		{
			menor = vector[i];
			menorIndex = i;
		}
	}
	
	vector[maiorIndex] = vector[size - 1];
	vector[menorIndex] = vector[0];
	vector[size - 1] = maior;
	vector[0] = menor;
	
	printf("\n");
	
	for(int i = 0; i < size; i++)
	{
		printf("%d", vector[i]);
	}
	
	return 0;
}
