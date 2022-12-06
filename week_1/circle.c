// This program defines calculations related to a circle

#include <stdio.h>

// preprocessor token PI
// can store up to 6 figures
#define PI 3.14159

int main()
{
    // declaration statement; area & radius are identifiers
    double area = 0.0, radius = 0.0;
    // prompt the user for input of the radius
    printf("Enter radius: ");
    // lf is long float
    // ampersand accesses the address for radius
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("radius of %lf meters; area is %lf sq. meters \n", radius, area);
    return 0;
}