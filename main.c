#include <stdio.h>

void insertionSort(int a[], int array_size);
void selectionSort(int a[], int array_size);
void bubbleSort(int a[], int array_size);
void shellSort(int a[], int array_size);
void mergeSort(int a[], int array_size);
void heapSort(int a[], int array_size);
void quickSort(int a[], int array_size);
void quick3Sort(int a[], int array_size);

const int NUM_OF_INTS = 50000;

int main(void){
	
	printf("------------------------------\n");
	printf("C Sorting Algorithm Speed Test\n");
	printf("------------------------------\n\n");
	FILE *file = fopen("./data/numbers","r");
	
	int integers[NUM_OF_INTS];
	
	int i=0;
	int num;
	while(fscanf(file, "%d", &num) > 0){
		integers[i] = num;
		i++;
	}
	
	fclose(file);
	
	//printf("Numbers Loaded\n");
	
	printf("Please pick an algorithm to speed test:\n");
	
	printf("1. Insertion Sort\n");
	printf("2. Selection Sort\n");
	printf("3. Bubble Sort\n");
	printf("4. Shell Sort\n");
	printf("5. Merge Sort\n");
	printf("6. Heap Sort\n");
	printf("7. Quick Sort\n");
	printf("8. Quick3 Sort\n\n");
	
	int algSelection = 0;
	
	while(algSelection <1 || algSelection > 8){
		
		printf("Please enter the number of the algorithm you want to test: ");
		scanf("%d", &algSelection);
		printf("\n");
		
		switch(algSelection){
			case 1: printf("Insertion Sort\n"); 
				insertionSort(integers, NUM_OF_INTS); 
				break;
			case 2: printf("Selection Sort\n"); 
				selectionSort(integers, NUM_OF_INTS); 
				break;
			case 3: printf("Bubble Sort\n"); 
				bubbleSort(integers, NUM_OF_INTS); 
				break;
			case 4: printf("Shell Sort\n"); 
				shellSort(integers, NUM_OF_INTS); 
				break;
			case 5: printf("Merge Sort\n"); 
				mergeSort(integers, NUM_OF_INTS); 
				break;
			case 6: printf("Heap Sort\n"); 
				heapSort(integers, NUM_OF_INTS); 
				break;
			case 7: printf("Quick Sort\n"); 
				quickSort(integers, NUM_OF_INTS); 
				break;
			case 8: printf("Quick3 Sort\n"); 
				quick3Sort(integers, NUM_OF_INTS); 
				break;
				
			default: printf("Invalid Option\n");
		}
	}
	
	//printf("%d %d %d %d %d\n",integers[0],integers[1],integers[2],integers[3],integers[4]);
	
	//insertionSort(integers, 50000);
	//bubbleSort(integers, 50000);
	
	//printf("%d %d %d %d %d\n",integers[0],integers[1],integers[2],integers[3],integers[4]);
	
	return 0;
	
}

void insertionSort(int a[], int array_size)
{
	 int i, j, index;
	 for (i = 1; i < array_size; ++i)
	 {
		  index = a[i];
		  for (j = i; j > 0 && a[j-1] > index; j--)
			   a[j] = a[j-1];

		  a[j] = index;
	 }
}

void selectionSort(int a[], int array_size){
	printf("Not yet implemented\n");
}

void bubbleSort(int a[], int array_size)
{
	 int i, j, temp;
	 for (i = 0; i < (array_size - 1); ++i)
	 {
		  for (j = 0; j < array_size - 1 - i; ++j )
		  {
			   if (a[j] > a[j+1])
			   {
					temp = a[j+1];
					a[j+1] = a[j];
					a[j] = temp;
			   }
		  }
	 }
}

void shellSort(int a[], int array_size)
{
	printf("Not yet implemented\n");
}

void mergeSort(int a[], int array_size)
{
	printf("Not yet implemented\n");
}

void heapSort(int a[], int array_size)
{
	printf("Not yet implemented\n");
}

void quickSort(int a[], int array_size)
{
	printf("Not yet implemented\n");
}

void quick3Sort(int a[], int array_size)
{
	printf("Not yet implemented\n");
}



