#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll()
{
	int r ; 
	r = rand() % 6;
	return r += 1;
}

int main()
{
	int r, dice1, dice2, dice3;

	/* seed the randomizer */
	srand((unsigned)time(NULL));
	puts("Roll them bones!");

	dice1 = roll();

	dice2 = roll();

	dice3 = roll();
	printf("You rolled %d - %d - %d\n", dice1, dice2, dice3);

	return (0);
}
