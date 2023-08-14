#include<stdio.h>
main(){
    int numero;


    char nome[50];
    int idade;
    char endereco[50];
    int matricula[50];
    char curso[50];
    int periodo[50];
    char diciplinas[50];
    char senha[100];
    
    printf("\n\nDigite o Nome Completo:");
    fgets(nome, 50, stdin);

    printf("\n\nDigite sua idade:");
    fgets(idade, 50, stdin); 

    printf("\n\nDigite sua matricula:");
    fgets(matricula, 50, stdin);

    printf("\n\nDigite seu endereco:");
    fgets(endereco, 50, stdin);

    printf("\n\nDigite seu curso:");
    fgets(curso, 50, stdin);
   
    printf("\n\nDigite seu periodo:");
    fgets(periodo, 50, stdin);

    printf("\n\nDigite suas disciplinas:");
    fgets(diciplinas, 50, stdin);

    printf("\n\nDigite sua senha:");
    fgets(senha, 50, stdin);

}