#include <stdio.h>

int main() {
    char nome[50];
    
    printf(" ");
    scanf("%s", nome);
    
    if (strcmp(nome, "Nicolas") == 0) {
        printf("\n");
    } else {
        printf("Tudo bem, eu gn");
    }
    
    return 0;
}