#include<stdio.h>


main(){


    float custo, valorFrete, despesas, valorVenda, lucro, soma;
   
    printf("Digite o valor de custo da mercadoria:");
    scanf("%f", &custo);


    printf("Digite o valor de frete da mercadoria:");
    scanf("%f", &valorFrete);


    printf("Digite o valor do frete das despesas:");
    scanf("%f", &despesas);


    printf("Digite o valor da venda:");
    scanf("%f", &valorVenda);


    soma = (custo + valorFrete+ despesas);


    lucro = (soma/ valorVenda)*100;


    printf("A porcentagem de lucro é: %.2f%%",lucro);










}
