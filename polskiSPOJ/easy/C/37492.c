#include <stdio.h>

void main()
{
	int x, y = 0;
	
	scanf("%d %d", &x, &y);
	
	while(x < y+1)
	{
		if(x%2 == 0 && x%3 != 0)
		{
			printf("a");
		}
		else if(x%2 != 0 && x%3 == 0)
		{
			printf("b");
		}
		else if(x%6 == 0)
		{
			printf("ab");
		}
		
		x++;
	}
	
}
