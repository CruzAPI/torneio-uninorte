#include <iostream>

int swaped = 0;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    
    swaped++;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

int main()
{
	int size = 10;
	int vetor[size];
	
	vetor[0] = 1;
	vetor[1] = 0;
	vetor[2] = 3;
	vetor[3] = 2;
	vetor[4] = 5;
	vetor[5] = 4;
	vetor[6] = 7;
	vetor[7] = 6;
	vetor[8] = 9;
	vetor[9] = 8;
	
	for(int i = 0; i < size; i++)
    {
        printf("%d", vetor[i]);
    }
	
	printf("\n");
	
	bubbleSort(vetor, size);
	
	for(int i = 0; i < size; i++)
    {
        printf("%d", vetor[i]);
    }
	
	printf("\nSwaped: %d", swaped);
	
	return 0;
}
