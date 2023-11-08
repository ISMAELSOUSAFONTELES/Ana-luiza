#include <stdio.h>
#include <stdlib.h>

float pesoideal(float h, int sexo)
{
    if(sexo = 1)
    {
        return 72.7*h -58;
    }
    else if(sexo = 2)
    {
        return 62.1*h -44.7;
    }
    else{
        return 0.0;
    }
}



int main()
{
    int x;
    float y, z;
    x = 2;
    y = 1.75;
    z = pesoideal(y, x);

    printf("%.2f",z);
    return 0;
}