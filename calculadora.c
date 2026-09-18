#include <stdio.h>


int sum(int number_One, int number_Two) {
    int sum_result = number_One + number_Two;
    return sum_result;
};


int subtraction(int number_One, int number_Two) {
    int subtraction_result = number_One - number_Two;
    return subtraction_result;
};


int multiplication(int number_One, int number_Two) {
    int multiplication_result = number_One * number_Two;
    return multiplication_result;
};


int division(int number_One, int number_Two) {
    int division_result = number_One / number_Two;
    return division_result;
};


int calculator() {

    int resultado;
    int first_number;
    char operador;
    int second_number;
    printf("Digite o primeiro numero inteiro");
    scanf("%d", &first_number);

    printf("Digite o simbolo de um operador matematico (soma: +, subtracao: -, multiplicacao: *, divisao: /)");
    scanf("%c", &operador);
    while (operador != '+' && operador != '-' && operador != '*' && operador != '/') {
        printf("Digite um simbolo de operador matematico valido (soma: +, subtracao: -, multiplicacao: *, divisao: /)");
        scanf("%c", &operador);
    };

    printf("Digite o segundo numero inteiro");
    scanf("%d", &second_number);

    if (operador == '+') {
        resultado = sum(first_number, second_number);
        return printf("O resultado é: %d", resultado);
    }
    else if (operador == '-') {
        resultado = subtraction(first_number, second_number);
        return printf("O resultado é: %d", resultado);
    }
    else if (operador == '*') {
        resultado = multiplication(first_number, second_number);
        return printf("O resultado é: %d", resultado);
    }
    else if (operador == '/') {
        resultado = division(first_number, second_number);
        return printf("O resultado é: %d", resultado);
    }

    return 0;
};

int main() {

    calculator();

    return 0;
}