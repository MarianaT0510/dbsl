#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
int main()
{
	int n;
	float a1, q, An, Sn;
	printf("请输入n:\n");
	scanf("%d", &n);
	if (n==1)
	{
		printf("请输入a1:\n");
		scanf("%f", &a1); 
		Sn = a1 *n;
		printf("Sn=%f",Sn);
	}
	else
	{
		printf("请输入a1:");
		scanf("%f", &a1);
		printf("请输入q:");
		scanf("%f", &q);
		An = a1 * pow(q, n - 1);
		Sn = (a1 - An * q) / (1 - q);
		printf("An=%f,Sn=%f", An, Sn);
	}
}