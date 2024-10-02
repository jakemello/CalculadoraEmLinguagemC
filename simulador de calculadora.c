#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TEXT "\t   <<<====Bem-Vindo(a) � Calculadora!====>>> \n"

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("%s\n", TEXT);
    
    float number1, number2;
    char operation;
    
    printf("\nDigite o primeiro valor: \n>>> ");
    scanf("%f", &number1);
    
    printf("\nDigite o segundo valor: \n>>> ");
    scanf("%f", &number2);
    
    printf("\nDigite a opera��o que deseja realizar (+) (-) (*) (/):\n >>> ");
    scanf(" %c", &operation);
    
    switch(operation){    
        case '+':
            printf("\nO resultado da soma dos valores �: >>> %.2f\n", number1 + number2);
            break;
        
        case '-':
            printf("\nO resultado da subtra��o dos valores �: >>> %.2f\n", number1 - number2);
            break;
        
        case '*':
            printf("\nO resultado da multiplica��o dos valores �: >>> %.2f\n", number1 * number2);
            break;
        
        case '/':
            if(number2 == 0){
                printf("\nN�o existe divis�o por zero.\n");
            } else {
                printf("\nO resultado da divis�o dos valores �: >>> %.2f\n", number1 / number2);
            }
            break;
        
        default:
            printf("\n Opera��o inv�lida...\n");
            break;
    }

    system("pause");
    
    return 0;    
}
