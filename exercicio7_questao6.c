#include<stdio.h>
#include<string.h>

main(){
    int opcao, quantidade,totalFruta = 0, fruta;
    float totalCompra = 0;

    do{
        printf("Adicione uma fruta: 1- Abacaxi (5.00) 2- Maca (1.00) 3-Pera (4.00)");
        scanf("%d %d", &fruta, &quantidade);

        switch(fruta){
            case 1:
            totalFruta = quantidade * 5;
            totalCompra += totalFruta;
            break;
             case 2:
            totalFruta = quantidade * 1;
            totalCompra += totalFruta;
            break;
             case 3:
            totalFruta = quantidade * 4;
            totalCompra += totalFruta;
            break;
            default:
            totalFruta = 0;
            totalCompra += totalFruta;
            break;
        }
        printf("Deseja adicionar mais frutas? 1-Sim 2-Nao");
        scanf("%d", &opcao);
    }while(opcao !=2);

    printf("Total da compra %f", &totalCompra);
}