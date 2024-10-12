#include <stdio.h>

int main() {
    char nome[50];
    
    printf("Digite um nome: ");
    scanf("%s", nome);
    
    if (strcmp(nome, "John") == 0) {
        printf("Eu realmente não gosto do John.\n");
    } else {
        printf("Tudo bem, eu gosto de você!\n");
    }
    
    return 0;
}