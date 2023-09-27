#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(0, "Portuguese");

    const int linhas = 3;
    const int colunas = 4;

    int matriz[linhas][colunas];

    printf("Digite os valores da matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int maior = matriz[0][0];
    int menor = matriz[0][0];

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    printf("O maior número na matriz é: %d\n", maior);
    printf("O menor número na matriz é: %d\n", menor);

    getchar();
}
