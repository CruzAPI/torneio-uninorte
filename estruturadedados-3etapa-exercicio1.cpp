#include <iostream>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
       for (j = 0; j < n-i-1; j++) 
           
		   if(!(arr[0] == 0 && arr[1] == 1 && arr[2] == 2) && arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
			
}

int main()
{	
	int size = 3;
	int vetor[size];
	
	vetor[0] = 2;
	vetor[1] = 1;
	vetor[2] = 0;
	
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
	
	return 0;
}
