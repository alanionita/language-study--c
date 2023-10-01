#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	// header
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
		// printf("%3d\t\t%6d\n", fahr, celsius);
		
		// prints out to decimal values
		//   required because the updated formular uses decimals
		printf("%3.0f\t\t%6.1f\n", fahr, celsius);

		fahr = fahr + step;
	}
	return 0;
}
