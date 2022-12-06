// this program converts the distance of a marathon in kilometers


#include <stdio.h>

int main(void)
{
    // declaration with initialization
    int miles = 26, yards = 385;
    double kilometers;

    kilometers = 1.609 * (miles + yards / 1760.0);
    printf( "\nA Marathon is %lf kilometers. \n\n", kilometers);
    return 0;
}