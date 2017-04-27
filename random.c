#include <stdio.h>
#include <stdlib.h>
#include <time.h>
Nguyen Dac Liem
#define REPEAT 10

int main( void )
{
	int i = 0;
	srand(time(NULL));
	printf("MAX: %d\n", RAND_MAX);
	for ( ; i < REPEAT; ++i){

		printf("%d\n", rand());
	}
	printf("\n");

	return 0;
}
