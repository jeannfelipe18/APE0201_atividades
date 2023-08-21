#include<stdio.h>

main(){

    // Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.

    float salarioAtual, porcentagem, porcentagemReajuste, novoSalario;

    printf("Digite o salario atual");
    scanf("%f", &salarioAtual);

    printf("Digite a porcentagem de rajuste");
    scanf("%f", &porcentagem);

    porcentagemReajuste = porcentagem/100;

    novoSalario = (salarioAtual * porcentagemReajuste) + salarioAtual;

    printf("Novo salario: R$%.2f", novoSalario);
    
}