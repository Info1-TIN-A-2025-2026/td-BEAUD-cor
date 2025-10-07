#include <stdio.h>

int main(int argc, const char *argv[])
{
	// PRINT
	long volume = 42; // m3

	printf("volume = [%ld]\n", volume);	  // %ld long
	printf("volume = [%7ld]\n", volume);  // right justified
	printf("volume = [%-7ld]\n", volume); // right justified

	printf("volume = [%+ld]\n", volume); // add sign of variable
	printf("volume = [%+7ld]\n", volume);
	printf("volume = [%+-7ld]\n", volume);

	long pression = -4; // bar
	printf("pression = [%ld]\n", pression);

	double pi = 3.141592653589793;
	printf("π = [%lf]\n", pi);	  // 6 digits after decimal point
	printf("π = [%.2lf]\n", pi);  // 2 digits after decimal point
	printf("π = [%+.2lf]\n", pi); // force sign

	double absolut_zero = -459.67;				  // °F
	printf("zero abs = [%.1lf]\n", absolut_zero); // 1 digit after decimal point

	printf("[%+10.2lf]\n", pi);
	printf("[%+10.2lf]\n", absolut_zero);

	double light_speed = 299792458.0;	 // m/s
	printf("[%+10.2lf]\n", light_speed); // shift if too big

	int num_digits = 12; // %.12lf
	printf("π = [%.3lf]\n", pi);
	printf("π = [%.*lf]\n", num_digits, pi); // num digits after decimal point

	int width = 8;
	num_digits = 3;
	printf("π = [%+*.*lf]\n\n\n\n\n", width, num_digits, pi); // num_digits after decimal point

	// SCAN
	float x = 0.f;
	float y = 0.f;
	int ret = 0;

	/*printf("Enter a floating point value x: ");
	ret = scanf("%f", &x); // &x = adress of variable x
	printf("x = %.4f\n", x);
	printf("ret = %d\n", ret);

	printf("Enter a floating point value y: ");
	ret = scanf("%f", &y); // &x = adress of variable y
	printf("y = %.4f\n", y);
	printf("ret = %d\n", ret);*/

	printf("Enter two floating points values (space separated): ");
	ret = scanf("%f:%f", &x, &y);
	printf("ret = %d\n", ret);
	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
}