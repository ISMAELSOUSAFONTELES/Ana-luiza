#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fat(int a)
{
    int prod = 1;
    int i;
    for(i=1;i<=a + 1;i++)
    {
        prod = prod*i;
    }

    return prod/(a + 1);
}

int arr(int n, int p)
{
    return fat(n)/fat(n - p);
}


int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("%d \n", arr(a,b));

    return 0;
}