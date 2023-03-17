#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main entry point
 * return = 0(Always) success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n < 0){
		printf("%d is negative\n", n);
	}
	else if (n > 0){
		printf("%d is positive\n", n);
	}
	else {
		printf("0 is Zero\n");
	}
	return (0);
}
