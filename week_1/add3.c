// Read in Three floats and print the sum

// include is a preprocessor keyword
#include <stdio.h>

// main is where the program begins
int main(void)
// curly bracers indicate it is the start of a peice of code
{
    // define the variables as floats
    float a,b,c, sum;
    // print function
    printf("Input three floats: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("a = %f, b = %f, c = %f \n", a, b, c);
    sum = a + b + c;
    printf("sum = %f \n\n", sum);
    // everything has completed correctly close the application
    return 0;
}

// Dennis Ritchie created C and the Unix Operating System  awarded in 1983.

// small program with limited keywords
// low-level program - it was made to build the Unix OS
// efficient - it is run close to machine level


// SIL - system implementation language.

