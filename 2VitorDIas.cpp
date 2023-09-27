#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(0, "Portuguese");
  
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 15) {
        printf("O número %d está contido no intervalo entre 10 e 15.\n", num);
    } else {
        printf("O número %d não está contido no intervalo entre 10 e 15.\n", num);
    }

    return 0;
}