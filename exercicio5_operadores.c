#include<stdio.h>

main(){
    //Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.

    float custo, valorFrete, despesas, valorVenda, valorBruto, lucro, porcentagemLucro;

    printf("\nDigite o valor de custo da mercadoria");
    scanf("%f", &custo);

    printf("\nDigite o valor do frete da mercadoria");
    scanf("%f", &valorFrete);

    printf("\nDigite o valor do frete das despesas");
    scanf("%f", &despesas);

    printf("Digite o valor de venda");
    scanf("%f", &valorVenda);

    valorBruto = custo + valorFrete + despesas;

    porcentagemLucro = (lucro/valorBruto)*100;

    printf("A porcentagem de lucro é: %.2f%%",lucro);
}