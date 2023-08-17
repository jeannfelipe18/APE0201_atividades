#include<stdio.h>
#include<math.h>

main(){
    double raio, PI = 3.1415, areaCirculo;

    printf("Digite o valor do raio");
    scanf("%lf", &raio);

    areaCirculo = PI * (raio * raio);
    areaCirculo = PI * (pow(raio,2));

    printf("%lf",areaCirculo);
}