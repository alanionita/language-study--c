#include <stdio.h>

int main()
{
	int fahr;
	int celsius;
	int lower = 0;
	int upper = 300;
	int step = 20;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahrenheit\tCelsius\n");
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		// prints the degrees without good indentation
		printf("%d\t\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
