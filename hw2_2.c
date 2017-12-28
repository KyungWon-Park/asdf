#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define ITERATION 2000

int main(void)
{
	double *y = malloc(sizeof(double) * ITERATION);

	FILE *fp = fopen("hw2_2_output.txt", "w");
	assert(fp != NULL && "MALLOC FAILED!\n");

	fprintf(fp, "# X Y\n");
	for (double mu = -1; mu < 3; mu += 0.0001)
	{
		y[0] = 0.1;
		for (int i = 0; i < ITERATION; i++)
		{
			y[0] = (mu * y[0]) - (y[0] * y[0] * y[0]);
		}

		for (int i = 1; i < ITERATION; i++)
		{
			y[i] = (mu * y[i - 1]) - (y[0] * y[0] * y[0]);
		}

		for (int i = 0; i < ITERATION; i++)
		{
			fprintf(fp, " %lf %lf\n", mu, y[i]);
		}
	}
	fclose(fp);
	free(y);
	return 0;
}
