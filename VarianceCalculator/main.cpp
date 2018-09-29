#include<stdio.h>
#include<cmath>

int main()
{
	float buf[] = {5,6,7,8,9,10 };

	int buflen = sizeof(buf) / sizeof(float);
	float average = 0;
	float sum = 0;
	float finalResult = 0;

	for (int i = 0; i < buflen; i++)
	{
		average += buf[i];
	}
	average = average / buflen;
	printf("Mean: %f\n", average);

	for (int i = 0; i < buflen; i++)
	{
		buf[i] = buf[i] - average;
		buf[i] = buf[i] * buf[i];
		sum += buf[i];
		finalResult = sum / (buflen - 1);
		finalResult = sqrt(finalResult);
	}

	printf("Standard Deviation: %f\n", finalResult);
}