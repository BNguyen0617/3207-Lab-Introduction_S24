#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.c"


int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)//the for loop will run 7 times and the rand function will print a random character making a  random word
		putchar( randchar() );
	putchar('\n');

	return(0);
}

