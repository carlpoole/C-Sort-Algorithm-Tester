#include <stdio.h>

void insertionSort(int a[], int array_size);
void bubbleSort(int a[], int array_size);

main(){
	
	printf("C Sorting Algorithm Speed Test\n");
	FILE *file = fopen("./data/numbers","r");
	
	int integers[50000];
	
	int i=0;
	int num;
	while(fscanf(file, "%d", &num) > 0){
		integers[i] = num;
		i++;
	}
	
	fclose(file);
	
	printf("Numbers Loaded\n");
	
	printf("%d %d %d %d %d\n",integers[0],integers[1],integers[2],integers[3],integers[4]);
	
	//insertionSort(integers, 50000);
	bubbleSort(integers, 50000);
	
	printf("%d %d %d %d %d\n",integers[0],integers[1],integers[2],integers[3],integers[4]);
	
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