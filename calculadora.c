#include<stdio.h>

int main()
{
 float num1, num2, resultado;
 int operador;

 printf("digite o primeiro numero:");
 scanf("%f", &num1);

 printf("digite o segundo numero: ");
 scanf("%f", &num2);

  printf(" \n");

 printf("selecione o operador:\n");
 printf("1- Adicao \n");
 printf("2- Subtracao \n");
 printf("3- Divisao \n");
 printf("4- Multiplicacao \n");
 scanf("%d", &operador);

 resultado = 0;


 if (operador == 1){
    resultado = num1 + num2;
    printf("Resultado = %.2f", resultado);
 }
 else if (operador == 2){
    resultado = num1 - num2;
    printf("Resultado = %.2f", resultado);
 }
 else if (operador == 3 && num2 != 0){
    resultado = num1 / num2;
    printf("Resultado = %.2f", resultado);
 }
 else if (operador == 3 && num2 == 0){
    printf("divisao invalida\n");
 }
 else if (operador == 4){
    resultado = num1 * num2;
    printf("Resultado = %.2f", resultado);
 }
 else{
    printf("operador invalido\n");
 }

return 0;
}
