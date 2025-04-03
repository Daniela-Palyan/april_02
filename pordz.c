#include <stdio.h>
#include <windows.h>
int main()
{

	float a = 0;
	scanf("%f", &a);
	fflush(stdout);
        float f = 0;
        f = a * 1.8;
        f += 32;
	//float b = 40;
	//f = b * 1.8 + 32;
	printf("%f", f);
	fflush(stdout);
	return 0;
}
