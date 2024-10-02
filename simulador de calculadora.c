#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TEXT "\t   <<<====Bem-Vindo(a) à Calculadora!====>>> \n"

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("%s\n", TEXT);
    
    float number1, number2;
    char operation;
    
    printf("\nDigite o primeiro valor: \n>>> ");
    scanf("%f", &number1);
    
    printf("\nDigite o segundo valor: \n>>> ");
    scanf("%f", &number2);
    
    printf("\nDigite a operação que deseja realizar (+) (-) (*) (/):\n >>> ");
    scanf(" %c", &operation);
    
    switch(operation){    
        case '+':
            printf("\nO resultado da soma dos valores é: >>> %.2f\n", number1 + number2);
            break;
        
        case '-':
            printf("\nO resultado da subtração dos valores é: >>> %.2f\n", number1 - number2);
            break;
        
        case '*':
            printf("\nO resultado da multiplicação dos valores é: >>> %.2f\n", number1 * number2);
            break;
        
        case '/':
            if(number2 == 0){
                printf("\nNão existe divisão por zero.\n");
            } else {
                printf("\nO resultado da divisão dos valores é: >>> %.2f\n", number1 / number2);
            }
            break;
        
        default:
            printf("\n Operação inválida...\n");
            break;
    }

    system("pause");
    
    return 0;    
}
