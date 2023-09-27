#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    
    setlocale(0, "Portuguese");
    
    char nome[50], c;
    int i;
    
        do{
            
            printf("\n\n Digite quaisquer palavras: ");
            scanf("%s", &nome);
                
            printf("\n");
            
            for(i = 0; nome[i] != 0; i++){
             
                switch(nome[i]){
                    case 'z': printf("p"); break;
                    case 'e': printf("o"); break;
                    case 'n': printf("l"); break;
                    case 'i': printf("a"); break;
                    case 't': printf("r"); break;
                    
                    case 'Z': printf("P"); break;
                    case 'E': printf("O"); break;
                    case 'N': printf("L"); break;
                    case 'I': printf("A"); break;
                    case 'T': printf("R"); break;
                    
                    case 'p': printf("z"); break;
                    case 'o': printf("e"); break;
                    case 'l': printf("n"); break;
                    case 'a': printf("i"); break;
                    case 'r': printf("t"); break;
                    
                    case 'P': printf("Z"); break;
                    case 'O': printf("E"); break;
                    case 'L': printf("N"); break;
                    case 'A': printf("I"); break;
                    case 'R': printf("T"); break;
                    
                    default: printf("%s", nome[i]);
                }
        
        }
        scanf("%s", &c);
    
    }while(c=='s' or c=='S');
    
    return 0;
}
