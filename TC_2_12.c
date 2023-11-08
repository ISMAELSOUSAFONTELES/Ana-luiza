#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int MDC(int x, int y)
{
    int valor;
    if(x > y)
    {
        valor = MDC(x -y, y);
    }
    else if(x < y)
    {
        valor = MDC(y , x);
    }
    else
    {
        valor = x;
    }

    return valor;
}


int main()
{


    return 0;
}