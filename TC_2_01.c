#include <stdio.h>
#include <stdlib.h>

float area(float b, float h)
{
    return(b*h/2);
}
int main()
{
    float x, y, z;
    x = 5;
    y = 6;
    z = area(x, y);

    printf("%f", z);
    

    return 0;
}