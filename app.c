#include <stdio.h>

int main(){

    char operador;
    double num1;
    double num2;
    double result;

    printf("Por favor ingresa un operador (* / + -)");
    scanf("%c",&operador);

    printf("Ingresa el num1: ");
    scanf("%lf",&num1);
    
    printf("Ingresa el num2: ");
    scanf("%lf",&num2);

    switch (operador){
    case '*':
        result = num1 * num2;
        printf("El resultado de %lf * %lf es: %lf", num1, num2, result);
        break;

    case '/':
        result = num1 / num2;
        printf("El resultado de %lf / %lf es: %lf", num1, num2, result);
        break;

    case '+':
        result = num1 + num2;
        printf("El resultado de %lf + %lf es: %lf", num1, num2, result);
        break;

    case '-':
        result = num1 - num2;
        printf("El resultado de %lf - %lf es: %lf", num1, num2, result);
        break;
    
    default:
        printf("Ingresa un operador valido");
        break;
    }


    return 0;
}