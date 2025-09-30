#include <stdio.h>

int main(int argc, const char *argv[])
{
    double m1 = 0;
    double m2 = 0;
    double d = 0;

    double G = 6.67e-11;

    printf("Masse m1[kg]: ");
    scanf("%lf", &m1);

    printf("Masse m2[kg]: ");
    scanf("%lf", &m2);

    printf("Distance[m]: ");
    scanf("%lf", &d);

    if (m1 < 0)
    {
        puts("Error");
    }

    if (m2 < 0)
    {
        puts("Error");
    }

    if (d < 0)
    {
        puts("Error");
    }

    printf("F = %2e N\n", G * m1 * m2 / (d * d));
}