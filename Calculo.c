#include <stdio.h>

main(){
float tempo, vm, distancia, litros_usados;

printf("tempo: ");
scanf("%f", &tempo);

printf("velocidade media: ");
scanf("%f", &vm);

distancia = tempo * vm;
litros_usados = distancia / 12;

printf("velocidade media: %.2f\n", vm);
printf("tempo gasto: %.2fh\n", tempo);
printf("distancia percorrida: %.2fkm\n", distancia);
printf("Combustivel utilizado: %.2fl", litros_usados);

}