#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int MOD(int x, int y)
{
    int valor;
    if(x > y)
    {
        valor = MOD(x - y, y);
    }
    else if(x = y)
    {
        valor = 0;
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