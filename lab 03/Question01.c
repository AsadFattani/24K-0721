#include <stdio.h>

int main(){
	int testInteger = 3000000000;
	printf("Number is %d", testInteger);
}

// The wrong value is being displayed beacuse the max value that can be stored is 4 bytes (32 bits) as the value is high so another value is shown
