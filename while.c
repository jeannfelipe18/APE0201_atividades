#include<stdio.h>

main(){

    int num = 0;
    int contador = 10;
    int res;

    while(contador >= 0){
        res = num * contador;
        printf("\n%d x %d = %d",num, contador, res);
        contador--; 
    }

}