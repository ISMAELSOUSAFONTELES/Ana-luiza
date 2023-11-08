#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double xay(double x, double y)
{
    double elev = 1;
    if (y > 0)
    {
        elev = x*xay(x, y - 1);
    }
    else if(y < 0)
    {
        elev = x*xay(x, -y - 1);

        elev = 1/elev;
    }

    return elev;
}

int main()
{
    printf("%.3f \n", xay(5,1/2));

    return 0;
}