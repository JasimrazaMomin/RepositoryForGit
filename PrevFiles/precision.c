#include <stdio.h>
#include <float.h>
int main()
{
    // printf("Precision:\n");
    // printf("Float: %d digits\n", FLT_DIG);
    // printf("Double: %d digits\n", DBL_DIG);
    // printf("Long Double: %d digits\n\n", LDBL_DIG);
    // printf("Minimum and Maximum Values:\n");
    // printf("Float: Minimum: %e, Maximum: %e\n", FLT_MIN, FLT_MAX);
    // printf("Double: Minimum: %e, Maximum: %e\n", DBL_MIN, DBL_MAX);
    // printf("Long Double: Minimum: %Le, Maximum: % Le\n", LDBL_MIN, LDBL_MAX);

    // const double Ped = 1.23456789;

    // // Printing options with different placeholders
    // // Minimum width = 0, 2 digits after decimal
    // printf("Printing options for Ped = %.2f:\n", Ped);

    // // Minimum width = 10, 4 digits after decimal
    // printf("Printing options for Ped = %10.4f:\n", Ped);

    // // Minimum width = 6, 8 digits after decimal
    // printf("Printing options for Ped = %6.8f:\n", Ped);
    const float F = 1.23456789f;
    const double D = 1.23456789;
    const long double L = 1.23456789L;
    printf("Original values:\n");
    printf("Float: %.8f\n", F);
    printf("Double: %.8lf\n", D);
    printf("Long Double: %.8Lf\n\n", L);
    printf("Rounded values:\n");
    printf("Float: %.20f\n", F);
    printf("Double: %.20lf\n", D);
    printf("Long Double: %.20Lf\n", L);
}
