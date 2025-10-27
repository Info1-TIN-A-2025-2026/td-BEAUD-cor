#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 0;
	int b = 0;
	int q = 0;
	int r = 0;

	/*
	printf("enter a: ");
	scanf("%d", &a);

	printf("enter b: ");
	scanf("%d", &b);

	q = a / b;
	r = a % b;

	printf("a/b = %d\n", q);
	printf("a%%b = %d\n", r); //%% display '%'

	a = 10;
	printf("%d\n", ++a);

	a = 10;
	printf("%d\n", a++);
	printf("%d\n", a);
	*/

	unsigned int min = 2;
	unsigned int max = 100;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int premier = 0;

	for (i = min; i <= max; i++)
	{
		premier = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				premier = 0;
		}
		if (premier == 1)
			printf("%d\n", i);
	}

	return 0;
}