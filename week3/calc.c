#include <stdio.h>
#include <math.h>
#include "calc.h"

double calc(char* menu, int x, int y) {
	if (menu == "sum")
		return (x + y);
	else if (menu == "sub")
		return (x - y);
	else if (menu == "mul")
		return (x * y);
	else if (menu == "div")
		return (double)x / y;
	else if (menu == "rem")
		return (x % y);
	else
		printf("unknown input");
}
double power(double base, double exponent)
{
	return pow(base, exponent);
}

double squareRoot(double num)
{
	if (num >= 0)
		return sqrt(num);
	else {
		printf("Error : Negative number!");
		return -1;
	}
}

double area0fCircle(double radius)
{
	return M_PI * radius;
}

double circumfrence0fCircle(double radius)
{
	return 2 * M_PI * radius;
}


int main() {
	int x = 2, y = 3;
	
	printf("x : %d + y : %d = %.0f\n", x, y, calc("sum", x, y));
	printf("x : %d - y : %d = %.0f\n", x, y, calc("sub", x, y));
	printf("x : %d x y : %d = %.0f\n", x, y, calc("mul", x, y));
	printf("x : %d / y : %d = %.2f\n", x, y, calc("div", x, y));
	printf("x : %d %% y : %d = %.0f\n", x, y, calc("rem", x, y));

	printf("x : %.1f ^ y : %.1f\n", power(x, y));
	printf("sqrt of x : %.1f = %.1f\n", x, squareRoot(x));
	printf("area of y : %.1f = %.1f\n", y, area0fCircle(y));
	printf("circ of y : %.1f = %.1f\n", y, circumfrence0fCircle(y));

}