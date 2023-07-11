#include <stdio.h>

void lp(int l, int i)
{
	if(l == 1)
	{
		printf("NIE\n");
	}		
	else if(l == 2)
	{
		printf("TAK\n");
	}
	else if(l > 2 && l <= 10000)
	{
		for(i = 2; i < l; i++)
		{
			if(l%i == 0)
			{
				printf("NIE\n");
				break;
			}

			if(i == l - 1)
			{
				printf("TAK\n");
			}
		}
	}
}

void main()
{
	int i = 0;
	int l = 0;
	int n = 0;
	
	scanf("%d", &n);

	if(n <= 100000 && n > 0)
	{
		
		while(n != 0)
		{ 
			scanf("%d", &l);
			lp(l, i);
			n--;
		}
	}
	
}
