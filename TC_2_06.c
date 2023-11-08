#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double crescente(int n , double a[n])
{
    int i, j, temp;
    for( i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(a[j] > a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}



int main()
{
    double notas[] = {1,5,6,2,4,9,0};
    crescente(7,notas);
    for(int i = 0; i < 7;i++)
    {
        printf("%.1f ",notas[i]);
    }
    
    return 0;
}