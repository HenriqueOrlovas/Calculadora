#include <stdio.h>
#include "funcoes.h"

int main() {
    float num1, num2, resultado;
    char operacao;
    char continuar = 's';

    while (continuar != 'q') {
        printf("\nEscolha a operação (+, -, *, /): ");
        scanf(" %c", &operacao);

        printf("Digite o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        switch (operacao) {
            case '+':
                resultado = soma(num1, num2);
                break;
            case '-':
                resultado = subtrai(num1, num2);
                break;
            case '*':
                resultado = multiplica(num1, num2);
                break;
            case '/':
                resultado = divide(num1, num2);
                break;
            default:
                printf("Operação inválida!\n");
                continue;
        }

        printf("Resultado: %.2f\n", resultado);

        printf("Deseja fazer outro cálculo? (s para sim, q para sair): ");
        scanf(" %c", &continuar);
    }

    printf("Programa encerrado.\n");
    return 0;
}

