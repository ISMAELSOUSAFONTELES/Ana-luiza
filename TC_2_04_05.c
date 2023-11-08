#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char eprimo(int a)
{
    int i;
    char r;
    if(a <= 1)
    {
        r = 'n';
        return r;
    }
    else
    {
    for(i = 2; i < a; i++)
    {
        if(a%i == 0 )
        {
        r = 'n';
        return r;
        }
    }

    r = 's';
    return r;
}
}




int main()
{
int x = 1;
int soma = 0;
int n = 1000;
for(x = 1; x <= n; x++){
printf("%d é primo? A resposta é %c \n", x, eprimo(x));
    if (eprimo(x) == 's'){
        soma = soma + x;
    }
}
printf("\n a soma dos primos até %d é %d",n, soma);
    return 0;
}