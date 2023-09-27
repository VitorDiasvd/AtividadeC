#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(0, "Portuguese");
    
    int valor1, valor2, soma;
    char resposta = 'S';

    while (resposta == 'S' || resposta == 's') {
        printf("Digite o primeiro valor: ");
        scanf("%d", &valor1);

        printf("Digite o segundo valor: ");
        scanf("%d", &valor2);

        soma = valor1 + valor2;

        printf("A soma dos valores é: %d\n", soma);

        printf("Novo cálculo (S/N)? ");
        scanf(" %c", &resposta);
    }

    printf("Fim dos cálculos.\n");

    return 0;
}