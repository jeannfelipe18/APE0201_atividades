#include<stdio.h>

main(){
    double altura;
    char nome[40];

    printf("Digite o seu nome:");
    fgets(nome, 40, stdin);

    printf("\nDigite sua altura:");
    scanf("%lf", &altura);

    if(altura >= 1.8){
        printf(" %s,você é maior que 1.8m", nome);
        printf("\nSua altura é: %lfm", altura);
    }else{
        printf("%s, você é menor que 1.8m", nome);
    }
    printf("\ncontinua...");
}
