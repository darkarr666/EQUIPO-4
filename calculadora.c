#include <stdio.h>

void main() {
    char op;
    double num1, num2, resultado;
    
    while (1) {
        printf("Ingrese una operación (+, -, *, /): ");
        scanf(" %c", &op);
        printf("Ingrese el primer número:\n ");
        scanf("%lf", &num1);
	printf("Ingrese el segundo número:\n ");
	scanf("%lf", &num2); 	

        switch (op) {
            case '*':
                resultado = num1 * num2;
                break;
        }
        printf("Resultado: %.2lf\n", resultado);
    }
}
