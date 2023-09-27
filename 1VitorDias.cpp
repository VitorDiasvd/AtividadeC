#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(0, "Portuguese");

	int umcarac;
	
	printf("Digite apenas uma letra aleatoria: ");
	scanf("%c", &umcarac);
	getchar();
	
    printf("A letra digitada é: %c\n", umcarac);
	printf("A letra digitada em inteiro é: %d\n", umcarac);
	printf("A letra digitada em hexadecimal é: %x\n", umcarac);

}