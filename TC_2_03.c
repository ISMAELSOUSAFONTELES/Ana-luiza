#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int h1, int h2)
{
    return (h1+h2)*(fabs(h1-h2) +1)/2;
}



int main()
{
    int x, y, z;
    x = 5;
    y = 2;
    z = soma(y, x);

    printf("%d",z);
    return 0;
}