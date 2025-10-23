#include <stdio.h>

void line (int l,char c)
{
	int x;
	for(x=0;x<l;x++)
		putchar(c);
	puts("\n");
}

int main()
{
	puts("Report on Extraterrestrial Activity");
	line(35,'-');

	return(0);
}
