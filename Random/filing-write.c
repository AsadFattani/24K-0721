#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	FILE *fptr;

	fptr = fopen("program.txt","w");

	if(fptr == NULL) {
		printf("Error!");
		exit(1);
	}
	printf("Enter number of values: ");
	scanf("%d",&num);

	for (int i = 0; i < num; i++){
		int value;
		printf("Enter num: ");
		scanf("%d",&value);
		fprintf(fptr,"%d\n",value);
	}
	
	fclose(fptr);
	return 0;
}