#include "module.h"
#include<math.h>

char main_interface(char ch)
{
	int n, a, b;
	double k, m;

	switch (ch) {
	case 'A':
		printf("To apotelesma einai: %d", paragontiko(n));
		break;
	case 'B':
		printf("To apotelesma einai: %d", gcd(a, b));
	case 'C':
		printf("To apotelesma einai: %f", pow(k, m));
		break;
	default:
		break;
	}
}

int paragontiko(int n)
{
	printf("Dwste to n");
	scanf("%d", &n);
	if (n == 0)
		return 1;
	else
		return n * paragontiko(n - 1);
}

int gcd(int a, int b)
{
	printf("Dwste to a");
	scanf("%d", &a);
	printf("Dwste to b");
	scanf("%d", &b);
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

double pow(double k, double m)
{
	printf("Dwste ton k");
	scanf("%f", &k);
	printf("Dwste ton m");
	scanf("%f", &m);
	if (k == 0)
		return 1;
	else
		return m * pow(m, k - 1);
}
