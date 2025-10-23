#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declare constant ratio equal to 3/4
	//declare char a
	//declare integer b
	//declare float c
	const float ratio = 3.0/4.0;
  char a;
	int b;
	float c;
	//assign char
	//assign integer
	//assign float
	a = 'a';
	b = 1;
	c = 28,5;

	//output char value, e.g., "the value of variable a is '?'"
	printf(" the value of variable a is '%c'\n", a);
			// output integer value, e.g., "the value of variable b is ??"
			printf("the value of variable b is %i\n", b);
			// output float value, e.g., "the value of variable c is ???.??"
			printf("the value of variable c is %f\n", c);
			// output value of ratio, e.g., "the value of constant ratio is ???.??"
			printf("the value of constant ratio is %f\n",ratio);

					return 0;
}
