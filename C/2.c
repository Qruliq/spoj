/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void prime(int a, int b)
{
    int i = 0;
    int j = 0;
    int p = 0;
    
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
            printf("%d\n", p);
            p = 0;
       }
    }
}

void main()
{
    int t = 0;
    int a = 0;
    int b = 0;
    int i = 0;
    int j = 0;
    int tab[2][10] = {{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}};
    
    scanf("%d", &t);
    if(t <= 0 || t > 10)
    { 
        scanf("%d", &t);   
    }
    
    for(i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        if(a > b || a < 1 || b >= 1000000000 || b - a >= 100000)
        {
            scanf("%d %d", &a, &b);
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
