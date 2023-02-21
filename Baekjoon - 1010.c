#include<stdio.h>
int main()
{
	int a, n, m, dam;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		dam = 1;
		scanf("%d %d", &n, &m);
		for (int j = 0; j < n; j++)
		{
			dam *= m - j;
			dam /= 1 + j;
		}
		printf("%d\n", dam);
	}
}
