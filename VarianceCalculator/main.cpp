#include<stdio.h>
#include<cmath>

int main()
{
	int buflen = 6;
	float buf[] = {5,6,7,8,9,10 };
	float average = 0;
	float sum = 0;
	float finalResult = 0;

	for (int i = 0; i < buflen; i++)
	{
		average += buf[i];
	}
	average = average / buflen;
	
	for (int i = 0; i < buflen; i++)
	{
		buf[i] = buf[i] - average;
		buf[i] = buf[i] * buf[i];
		sum += buf[i];
		finalResult = sum / (buflen - 1);
		printf("test: %f\n", finalResult);
		finalResult = sqrt(finalResult);
	}

	printf("Answer: %f\n", finalResult);
}