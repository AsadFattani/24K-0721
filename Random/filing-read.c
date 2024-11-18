#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	FILE *fptr;

	if ((fptr = fopen("program.txt", "r")) == NULL) {
		printf("Error! Opening file");

		// Program exits if the file pointer returns NULL.
		exit(1);
	}

	while (fscanf(fptr, "%d", &num) != EOF) {
		printf("Value of n = %d\n", num);
	}

	fclose(fptr);

	return 0;
}