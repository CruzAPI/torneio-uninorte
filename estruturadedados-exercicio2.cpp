#include <stdio.h>

int size;
int pilha[0];

void push(int y) 
{
   pilha[size++] = y;
}

int pop() 
{
   return pilha[--size];
}

int main() 
{
	push(2);
	push(3);
	push(4);
	
	for(int i = 0; i < size; i++)
	{
		printf("%d\n", pilha[i]);
	}
	
	printf("######\n");
	
	pop();
	
	for(int i = 0; i < size; i++)
	{
		printf("%d\n", pilha[i]);
	}
	
	return 0;
}
