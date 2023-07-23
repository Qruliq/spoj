#include <stdio.h>

void main()
{
    int t = 0;
    int a = 0;
    int b = 0;
    int i = 0;
    int j = 0;
    int tab[9][1] = {0};
    
    scanf("%d", &t);
    if(t <= 0 || t > 10)
    { 
        scanf("%d", &t);   
    }
    
    for(i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        tab[i][0] = a;
        tab[i][1] = b;
    }
    
    for(i = 0; i < t; i++)
    {
        if(i != 1)
        {
            for(j = 1; j <= i; j++)
            {
                if(j%i == 0)
                {
                    break;
                }
                else if(j%i != 0 && j == i - 1)
                {
                    printf("%d", j);
                }
            }    
        }
    }
}
