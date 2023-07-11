#include <stdio.h>

void main()
{
	int a, b = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);

	if(a < 200 && b < 200)printf("%d\n", a + b);
}
