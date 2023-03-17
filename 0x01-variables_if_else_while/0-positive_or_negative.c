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
		printf("is negative\n");
	}
	else if (n > 0){
		printf("is positive\n");
	}
	else {
		printf("is Zero\n");
	}
	return (0);
}