#include<stdio.h>

main(){
    int peso;
    char nome[40];

    printf("Digite o seu nome:");
    fgets(nome, 40, stdin);

    printf("\nDigite seu peso:");
    scanf("%d", &peso);

    if(peso >= 60){
        printf(" %s,Seu peso é maior que 60kg", nome);
        printf("\nSeu peso é: %d", peso);
    }else{
        printf("%s, Seu peso é menor que 60kg", nome);
    }
    printf("\ncontinua...");
}