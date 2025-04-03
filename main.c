#include <stdio.h>
#include "isum.c"
#include "squere.c"
#include "sign.c"
#include "fsum.c"
#include "max.c"
#include "c_to_f.c"
int main()
{
	int a = 0, b = 0;
	float x = 0, y = 0;

//sum of integers
	printf("Enter a and b: ");
	fflush(stdout);
        scanf("%d %d", &a, &b);
	printf("Result is: %d\n", sum(a, b));
        fflush(stdout);
//squere
	printf("Enter a: ");
        fflush(stdout);
        scanf("%d", &a);
	printf("Result is: %d\n", squere(a));
        fflush(stdout);
//sign
	printf("Enter a: ");
        fflush(stdout);
        scanf("%d", &a);
	printf("Result is (1 if a > 0, 0 if a <= 0): %d\n", sign(a));
        fflush(stdout);
//sum of float numbers
	printf("Enter a and b: ");
        fflush(stdout);
        scanf("%f %f", &x, &y);
	printf("Result is: %f\n", fsum(x, y));
        fflush(stdout);
//max number
	printf("Enter a and b: ");
        fflush(stdout);
        scanf("%d %d", &a, &b);
	printf("Result is: %d\n", max(a, b));
        fflush(stdout);
//celsius -> fahrenheit
	printf("Enter temp in celsius: ");
        fflush(stdout);
        scanf("%f", &x);
        printf("Result is: %f\n", c_to_f(x));
        fflush(stdout);


	return 0;
}
