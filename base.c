#include <stdio.h>

int main() {
    float base;
    float altura;
    float area;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("A área é: %.2f\n", area);

    return 0;
}
