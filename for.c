#include<stdio.h>

main(){

    int num = 0;
    //int contador = 10;
    int res;

    for(int contador = 0; contador <= 10; contador++){
        res = num * contador;
        if(contador < 5){
        printf("\n%d x %d = %d", num, contador, res);
        }
    }
    printf("Fim do loop");
}