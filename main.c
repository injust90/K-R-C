#include <stdio.h>

int conversion(int lowerLimit, int upperLimit)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = lowerLimit;
	upper = upperLimit;
	step = 20;

	fahr = lower;
	while(fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

main()
{
	int lowerLimit, upperLimit;
	scanf("%d", &lowerLimit);
	scanf("%d", &upperLimit);

	conversion (lowerLimit, upperLimit);
}


