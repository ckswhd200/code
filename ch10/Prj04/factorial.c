#include <stdio.h>
double sum(double data[][3], int, int);
void printarray(double data[][3], int, int);

int main() {
	for (int i = 1; i <= 10; i++)
		printf("%2d! = %d\n", i, factorial(i));

	return 0;
}

int factorial(int number) {
	if (number <= 1)
		return 1;
	else
		return(number * factorial(number - 1));
}