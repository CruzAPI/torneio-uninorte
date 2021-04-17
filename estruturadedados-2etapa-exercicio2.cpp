#include <iostream>

int swapedBubble = 0;

void swapBubble(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    
    swapedBubble++;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swapBubble(&arr[j], &arr[j+1]);
}

int swapedSelection = 0;

void swapSelection(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    
    swapedSelection++;
}
  
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
  
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
  		
        swapSelection(&arr[min_idx], &arr[i]);
    }
}

int main()
{
	int size = 7;
	int vetor[size];
	
	vetor[0] = 10;
	vetor[1] = 8;
	vetor[2] = 6;
	vetor[3] = 4;
	vetor[4] = 2;
	vetor[5] = 1;
	vetor[6] = 3;
	
	for(int i = 0; i < size; i++)
    {
        printf("%d,", vetor[i]);
    }
	
	printf("\n");
	
	bubbleSort(vetor, size);
	
	for(int i = 0; i < size; i++)
    {
        printf("%d,", vetor[i]);
    }
	
	printf("\nBubble swaped: %d", swapedBubble);
	
	int size1 = 7;
	int vetor1[size];
	
	vetor1[0] = 10;
	vetor1[1] = 8;
	vetor1[2] = 6;
	vetor1[3] = 4;
	vetor1[4] = 2;
	vetor1[5] = 1;
	vetor1[6] = 3;
	
	printf("\n");
	
	for(int i = 0; i < size; i++)
    {
        printf("%d,", vetor1[i]);
    }
	
	printf("\n");
	
	selectionSort(vetor1, size1);
	
	for(int i = 0; i < size; i++)
    {
        printf("%d,", vetor[i]);
    }
	
	printf("\nSelection swaped: %d", swapedSelection);
	
	return 0;
}
