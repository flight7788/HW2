#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	float principal, rate, charge;
	int days;

	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &principal);

		if (principal == -1)
		{
			break;
		}

		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &days);

		charge = principal * rate * days / 365;

		printf("The interest charge is $%.2f\n\n", charge);


	}
}