#include<stdio.h>

void trocar(int *x, int *y){
int temp;
temp = *x;
*x = *y;
*y = temp;
}


main() {

int a,b;
printf("a= ");
scanf("%d",&a);
printf("b= ");
scanf("%d",&b);

trocar(&a,&b);

printf(" a = %d\n",a);
printf(" b = %d\n",b);
}