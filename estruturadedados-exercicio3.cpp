#include <iostream>


int main()
{
	int size = 51;
	char cadeia[size] = "AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAA";
	
	int a = 0;
	int g = 0;
	int c = 0;
	int t = 0;
	
	for(int i = 0; i < size; i++)
	{
		if(cadeia[i] == 'A')
		{
			a++;
		}
		
		if(cadeia[i] == 'C')
		{
			c++;
		}
		
		if(cadeia[i] == 'G')
		{
			g++;
		}
		
		if(cadeia[i] == 'T')
		{
			t++;
		}
	}
	
	printf("Cadeia: AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAA\n");
	printf("Tamanho: %d\n", size);
	printf("A: %d\n", a);
	printf("C: %d\n", c);
	printf("G: %d\n", g);
	printf("T: %d\n", t);
	
	return 0;
}
