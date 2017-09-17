#include <stdio.h>
#include <stdlib.h>

void    replace(int a[][8], int old, int value)
{
    int i;
    int j;

    i = 0;
    while(i < 8)
    {
        j = 0;
        while(j < 8)
        {
            if(a[i][j] == old || old == value)
                a[i][j] = value;
            j++;
        }
        i++;
    }
}

void    queen_range(int a[][8], int x, int y, int queen)
{
    int k;

    k = 0;
    while(k < 8)
    {
        if (a[k][y] == 0)
            a[k][y] = queen;
        if (a[x][k] == 0)
            a[x][k] = queen;
        if (k + y - x >= 0 && k + y - x < 8)
        {
            if(a[k][k + y - x] == 0)
                a[k][k + y - x] = queen;
        }
        if(x + y - k >= 0 && x + y - k < 8)
        {
            if(a[k][x + y - k] == 0)
                a[k][x + y - k] = queen;
        }
        k++;
    }
}

int   bkt(int a[][8], int queen)
{
    int i;
    int j;
    int k;
    int s;

    if (queen == 9)
    {
        return (1);
    }

    i = 0;
    s = 0;
    while (i < 8)
    {
        j = 0;
        while (j < 8)
        {
            if (a[i][j] == 0)
            {
                a[i][j] = -queen;
                queen_range(a, i, j, queen);
                s += bkt(a, queen + 1);
                replace(a, queen, 0);
            }
            j++;
        }
        i++;
    }
    replace(a, -queen, 0);
    return (s);
}

int       ft_eight_queens_puzzle(void)
{
    int a[8][8];

    replace(a, 0, 0);
    return (bkt(a, 1));
}

int     main()
{
    printf("%d\n", ft_eight_queens_puzzle());
    return 0;
}
