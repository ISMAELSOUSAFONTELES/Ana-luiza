#include <stdio.h>

void divisoresDeUmNumero(int x) {
    int cont = 0;
    printf("Os divisores inteiros de %d são: ", x);
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            printf("%d, ", i);
            cont++;
        }
    }
    printf("\nA quantidade é: %d\n", cont);
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    divisoresDeUmNumero(num);

    return 0;
}
