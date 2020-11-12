#include <stdio.h>
 
int main(void)
{
    float raio, altura, volume;
 
    printf("RAIO   = "); scanf("%f", &raio);
    printf("ALTURA = "); scanf("%f", &altura);
 
    volume = 3.14159 * raio * raio * altura;
 
    printf("VOLUME = %f", volume);
 
    return 0;
}
