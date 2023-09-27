#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(0, "Portuguese");

    int num1, num2, num3, menor;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if (num1 < num2) {
        menor = num1;
    } else {
        menor = num2;
    }

    if (num3 < menor) {
        menor = num3;
    }

    printf("O menor número é: %d\n", menor);

    return 0;
}