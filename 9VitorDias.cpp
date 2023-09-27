#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(0, "Portuguese");

    char name[100];
    int i, j, tam;

    printf("Digite o nome completo: ");
    scanf("%[^\n]s", name);

    tam = strlen(name);
    if (name[tam-1] == '\n') {
        name[tam-1] = '\0';
    }

    printf("Nome normal: %s\n", name);

    printf("Nome em linhas:\n");
    for (i = 0; i < strlen(name); i++) {
        if (name[i] == ' ') {
            printf("\n");
        } else {
            printf("%c", name[i]);
        }
    }
    printf("\n");

    printf("Nome espaçado: ");
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            printf(" ");
        } else {
            printf("%c", name[i]);
            for (j = i+1; name[j] != ' ' && name[j] != '\0'; j++) {
                printf(" %c", name[j]);
            }
            i = j-1;
        }
    }
    printf("\n");

    return 0;
}