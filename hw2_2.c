#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

#define ITERATION 2000

int cnt = 0;

void partplot(float start, float end)
{
	FILE *fp;
	switch (cnt)
	{
		case 0:
			fp = fopen("hw2_2_output_0.txt", "w");
			break;
		case 1:
			fp = fopen("hw2_2_output_1.txt", "w");
			break;
		case 2:
			fp = fopen("hw2_2_output_2.txt", "w");
			break;
		case 3:
			fp = fopen("hw2_2_output_3.txt", "w");
			break;
	}

	assert(fp != NULL && "MALLOC FAILED!\n");

	double *y = malloc(sizeof(double) * ITERATION);

	fprintf(fp, "# X Y\n");
	for (double mu = start; mu < end; mu += 0.0001)
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
			fprintf(fp, " %f %f\n", mu, (float) y[i]);
		}
	}
	fclose(fp);
	free(y);
	cnt++;

	return;
}

int main(void)
{
	partplot(-1, 0);
	partplot(0, 1);
	partplot(1, 2);
	partplot(2, 3);
	return 0;
}
