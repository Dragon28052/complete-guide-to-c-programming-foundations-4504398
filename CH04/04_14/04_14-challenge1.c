#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main()
{
	// variable declarations
	char in;
	int done;		
	/* main program loop */
	done = FALSE;
	while(!done)
	{
		cmd:
		// prompt for input
		printf("Commad:");
		// process input
		scanf("%c",&in);
		// if R is input, output "move right"
		if (in == 'R') {
			printf("move right\n");
			goto cmd;
		}
		// if L is input, output "move left"
		if (in == 'L')
		{
			printf("move Left\n");
			goto cmd;
		}
		// if B is input, output "move back"
		if (in == 'B')
		{
			printf("move Back\n");
			goto cmd;
		}
		// if Q is input, break the loop
		if (in == 'Q')
		{
			printf("Quit\n");
			done= 1;
		}
		// if H or ? is input, output valid commands
		if (in == 'H'||in == '?')
		{
			printf("HELP\n");
			goto cmd;
		}
		// identify invalid input
		if ((in == 'H' || in == '?' || in == 'R' || in == 'L' || in == 'B'))
		{
			printf("invalide");
			goto cmd;
		}
		
	}

	return 0;
}
