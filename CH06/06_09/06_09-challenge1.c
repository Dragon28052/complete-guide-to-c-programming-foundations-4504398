#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

struct me
{
	struct date birthday;
	double heightkm;
	char name[20];
};

int main()
{
	struct me ich = {{28, 5, 2004}, 0.0018, "Martin"};

	printf("%s hat am %02d.%02d.%d Geburtstag und ist %.4f km groß.\n",
				 ich.name, ich.birthday.day, ich.birthday.month, ich.birthday.year, ich.heightkm);

	return 0;
}
