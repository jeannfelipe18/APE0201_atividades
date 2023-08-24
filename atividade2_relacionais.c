#include<stdio.h>

main(){
    float salario;
    char nome[40];

    printf("Digite o seu nome:");
    fgets(nome, 40, stdin);

    printf("\nDigite seu salario:");
    scanf("%f", &salario);

    if(salario >= 1320){
        printf(" %s,você ganha mais que um salario minimo", nome);
        printf("\nSeu salario é: R$%f", salario);
    }else{
        printf("%s, você ganha menos que um salaio minimo", nome);
    }
    printf("\ncontinua...");
}