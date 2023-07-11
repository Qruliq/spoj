#include <stdio.h>

void silnia(int n, int i)
{
	int s = 1;

	if(n == 1 || n == 0)
	{
		printf("0 1\n");
	}
	else if(n > 9)
	{
		printf("0 0\n");
	}
	else
	{
		for(i = 1; i <= n; i++)
		{
			s *= i;
		}

		if(s < 10)
		{
			printf("0 %d\n", s);
		}
		else if(s < 100 && s >= 10)
		{
			printf("%d %d\n", s/10, s%10);
		}
		else
		{
			printf("%d %d\n", (s%100)/10, s%10);
		}
	}
}

int main(int argc, char* argv[])
{
	int i = 0;
	int d = 0;
	int n = 0;

	scanf("%d", &d);

	if(d > 31 || d < 0)
	{
		return 0;
	}
	
	for(i = 0; i < d; i++)
	{
		scanf("%d", &n);
		
		if(n <= 1000000000 && n >= 0)
		{
			silnia(n, i);
		}
	}

	return 0;
}
