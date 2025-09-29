#include <stdio.h>

int main(int argc, const char *argv[])
{
	printf("Number of seconds:");

	int s = 0;
	scanf("%d", &s);

	if(s < 0)
	{
		puts("Error");
	}
	else if(s >= 86400)
	{
		puts("Overflow");
	}
	else
	{
		unsigned int hours = 0;
		unsigned int minutes = 0;
		unsigned int seconds = 0;

		hours = s / 3600;
		minutes = s / 60 - hours * 60;
		seconds = s - minutes * 60 - hours * 3600;

		printf("%02u:%02u:%02u\n", hours, minutes, seconds);
	}
}