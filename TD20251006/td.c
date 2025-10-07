#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	// %d base 10 signed, %u base 10 unsigned, %hd base 10 signed short, %x base 16, %o base 8
	unsigned char num_students = 23;
	unsigned char num_chairs = 32;
	short delta = num_students - num_chairs;
	bool sw1 = true;
	bool sw2 = true;
	unsigned char state = sw1 + (sw2 << 4);

	printf("Number of students : %u, Number of chairs : %u\n", num_students, num_chairs);
	printf("Delta : %hd\n", delta);
	printf("Switch 1 : %d, Switch 2 : %d\n", sw1, sw2);
	printf("State : %x\n", state);

	char a = 'A'; // ASCII code of 'A' = 65
	printf("a = %d\n", a);
	printf("a = %c\n", a);

	char b = 112;
	printf("b = %c\n", b);
}