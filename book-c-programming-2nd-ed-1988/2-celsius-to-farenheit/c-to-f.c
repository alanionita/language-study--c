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
		// non decimal point
		// celsius = 5 * (fahr - 32) / 9;

		// adds decimal point logic
		//   formula closer to maths
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		// prints the degrees without good formatting
		// printf("%d\t\t%d\n", fahr, celsius);
		
		// prints the degrees with formatting and right indentation
		printf("%3d\t\t%6d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
