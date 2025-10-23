#include <stdio.h>

int main()
{
	int a,b;

	printf("Enter two values, separated by a space: ");
	scanf("%d",&a);
	scanf("%d",&b);

	// add
	printf("add %d\n",a+b);
	// subtract
	printf("sub %d\n", a - b);
	// multiply
	printf("mul %d\n", a * b);
	// divide
	printf("div %f\n",(float)a/b);
	// modulus
	printf("mod %d\n", a % b);
	// bit shift right
	printf("Sr %d\n", a >> b);
	// bit shift left
	printf("Sl %d\n", a << b);

	return 0;
}
