#include <stdio.h>

int main()
{
	int a;

	printf("How long is the line? ");
	scanf("%d",&a);

	/* write the loop here */
 while (a>0)
 {
	putchar('-');
	--a;1
 }
 
	return(0);
}
