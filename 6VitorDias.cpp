#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(0, "Portuguese");
    
  int largura, altura;
  
  printf("Digite a largura do quadrado: ");
  scanf("%d", &largura);
  
  printf("Digite a altura do quadrado: ");
  scanf("%d", &altura);
  
  for (int i = 0; i < altura; i++) {
    for (int j = 0; j < largura; j++) {
      printf("X ");
    }
    printf("\n");
  }
  
  return 0;
}
