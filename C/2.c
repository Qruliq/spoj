#include <stdio.h>

void prime(long long int a, long long int b)
{
    long long int i = 0;
    long long int j = 0;
    long long int p = 0;
    
    if(a == 1)
    {
        a = 2;
        printf("2\n");
    }
    
    for(i = a; i <= b; i++)
    {
        for(j = 2; j <= i; j++)
        { 
            if(i%j == 0)
            {
                p = 0;
                break;
            }
            else if(i%j != 0 && j == i - 1)
            {
                p = i;
                break;
            }
        }
       if(p != 0)
       {
            printf("%lld\n", p);
            p = 0;
       }
    }
}

void main()
{
    int t = 0;
    long long int a = 0;
    long long int b = 0;
    long long int i = 0;
    long long int j = 0;
    long long int tab[2][10] = {{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}};
    
    scanf("%d", &t);
    if(t <= 0 || t > 10)
    { 
        scanf("%d", &t);   
    }
    
    for(i = 0; i < t; i++)
    {
        scanf("%lld %lld", &a, &b);
        if(a > b || a < 1 || b >= 1000000000 || b - a >= 100000)
        {
            scanf("%lld %lld", &a, &b);
        }
        tab[0][i] = a;
        tab[1][i] = b;
    }
    
    for(i = 0; i < t; i++)
    {
        a = tab[0][i];
        b = tab[1][i];
        
        prime(a, b);
        printf("\n");
    }
}
