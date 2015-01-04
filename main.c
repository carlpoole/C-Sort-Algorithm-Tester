#include <stdio.h>

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
	
	printf("%d %d %d\n",integers[50],integers[100],integers[45000]);
	
}