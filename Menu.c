#include <stdio.h>

void fatorial(){
    printf("Fatorial V\n Escreva o número a ser fatorado: ");
    int fat;
    scanf("%i", &fat);
    int count = fat;
    int final = 1;
    for (count; count >= 1; --count){
        final = final * count;
    }
    printf("O fatorial de %i é: %i\n",fat, final);
}

void serie (){
        float serie, n, a;
    serie =0;
    a = 1;
    printf("Serie 1+ 1/2+1/2+..+1/n \nMe dê o número da série: ");
    scanf("%f",&n);
    for(a ; a<n+1 ; ++a){
        serie = serie + (1/a);
    }
    printf("A somatória da série é: %.2f\n",serie);
    return(0);
}

void tabuada(){
    int n,a;
    printf("Tabuada de n V\nEscolha um numero que deseje saber a tabuada: ");
    scanf("%i",&n);
    for(a=1; a<=10 ; ++a){
        printf("%i X %i  = %i\n",n ,a,a*n);
    }
    return(0);
}

void somatoria(){
    printf("Somatório dos impares entre n e m \nDigite dois numeros (X Y): ");
            int x=0,y=0,soma=0;
            scanf("%d %d", &x , &y);
            for(;x <= y; ++x){
                if(x%2 !=0){
                    soma= soma + x;
                }
            }
            printf("\n a soma dos numero impares é: %d\n", soma);

}
void media(){
    printf("Media de 30 números\nDigite 30 numeros para fazer a somatoria\n");
    int num,soma = 0,media;
    for(int i = 0; i<30; ++i){
        printf("Digite um número: ");
        scanf("%i",&num);
        soma = soma+num;
    }
    media = soma / 30;
    printf("A soma total é: %i\n",soma);
    printf("A media é: %i\n",media);

return(0);
}
void salario(){
    printf("Salario de Clarisbela\n Digite o salario de Clarisbela:");
    float sal_cla,sal_flo,red_cla,red_flo;
    int contador = 0;
    scanf("%f",&sal_cla);
    sal_flo = sal_cla/3;
    printf("o salario da Florentina é de: %.2f\n",sal_flo);
    while (sal_cla>sal_flo){
        red_flo = sal_flo/0.05;
        sal_flo = sal_flo + red_flo;
        red_cla = sal_cla/0.02;
        sal_cla = sal_cla + red_cla;
        contador = contador +1;
    }
    printf("O salario da Florentina, passará o da Clarisbela em %i mêses\n",contador);
return(0);
}
void triangulos(){
int escolha_do_dez,contador_do_dez = 0;
    printf("Triângulo \n");
    printf("[1] 10 triângulos \n");
    printf("[2] 15 retangulos\n");
    printf("[3] 20 trapésios \n");
    printf("[4] 15 circunferências \n");
    printf("Escolha uma das seguintes opções:");
    scanf("%i",&escolha_do_dez);
    if (escolha_do_dez == 1){
        printf("Voce escolheu triângulo\n");
        while (contador_do_dez<10){
            int base, altura, area;
            printf("Informe a altura do Triângulo: ");
            scanf("%d",&altura);
            printf("Informe o medida do lado do Triangulo:");
            scanf("%d",&base);
            area = (base*altura)/2;
            printf("a area do Triângulo é: %d\n",area);
        }
    }
    else if (escolha_do_dez==2){
        while (contador_do_dez<15){
            int base, altura, area;
            printf("Informe a altura do Retângulo: ");
            scanf("%d",&altura);
            printf("Informe o medida da base do Retângulo:");
            scanf("%d",&base);
            area = (base*altura);
            printf("a area do Retângulo é: %d\n",area);
        }
    }
    else if (escolha_do_dez==3){
        while (contador_do_dez<20){
            int baseM, basem,altura,area;
            printf("Informe a altura do Trapézio: ");
            scanf("%d",&altura);
            printf("Informe o medida da base maior do Trapézio:");
            scanf("%d",&baseM);
            printf("Informe o medida da base menor do Trapézio:");
            scanf("%d",&basem);
            area = ((baseM+basem)*altura)/2;
            printf("a area do Trapézio é: %d\n",area);
        }
    }
    else if (escolha_do_dez==4){
        while (contador_do_dez<15){
            int raio,area;
            printf("Informe a altura da Circunferência: ");
            scanf("%d",&raio);
            area = (3.14*raio*raio);
            printf("a area do Circunferência é: %d\n",area);
        }
    }
    else{
        printf("Escolha inexistente... Tente novamente...");
        system("clear");
    }
    return(0);
}

void potencia (){
    printf("Primos \n");
    int a, b, AUX;
    printf("Me de a base: ");
    scanf("%d",&a);
    printf("Me de o expôente: ");
    scanf("%d",&b);
    if (a<b){
        AUX= a;
        a=b;
        b=AUX;
    }
    for(int i=1; i < b ;++i);{
        a=a*a;
    }
    printf("o resultado é %d\n",a);
return(0);
}

int main(){

int loop = 1;

while (loop == 1){


        printf("---------------------------------------------------");
    printf("\n|                                                |");
    printf("\n|          Menu Principal                        |");
    printf("\n|                                                |");
    printf("\n|   2) Fatorial V                                |");
    printf("\n|   3) Serie 1+ 1/2+1/2+..+1/n                   |");
    printf("\n|   4) Tabuada de n V                            |");
    printf("\n|   41) Tabuada de n ate m V                     |");
    printf("\n|   5) Somatório dos impares entre n e m         |");
    printf("\n|   18) Idade do mais velho e do mais novo V     |");
    printf("\n|   16) Media de 30 números                      |");
    printf("\n|   21) Salario do Clarisbela                    |");
    printf("\n|   23) Estatística de candidatos                |");
    printf("\n|   28) Triângulo                                |");
    printf("\n|   29) Primos                                   |");
    printf("\n|   99) Sair.                                    |");
    printf("\n--------------------------------------------------");
    printf("\n Digite uma opção:");

    int opcao;
    scanf("%i", &opcao);
    system("clear");
    if (opcao == 2 || opcao == 02){
        fatorial();
        }
    else if (opcao == 3 || opcao== 03){
        serie();
    }
    else if (opcao == 4){
        tabuada();
    }
    
    else if (opcao == 5){
        somatoria();
    }
    else if (opcao == 16){
        media();
    }
    else if (opcao == 21){
       salario();
    }
    else if (opcao == 28){
        triangulos();
    }
    else if (opcao == 29){
        potencia();
    }
    else if (opcao == 99){
        loop = 0;

    }
    else {
        printf("Opção inválida,digite novamente...");
    }
}
}
