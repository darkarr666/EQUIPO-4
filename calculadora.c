#include <stdio.h>

void main() {
    char op;
    double num1, num2, resultado;
    
    while (1) {
        printf("Ingrese una operación (+, -, *, /) o 'q' para salir: ");
        scanf(" %c", &op);

        // Opción para salir del bucle
        if (op == 'q' || op == 'Q') {
            printf("Saliendo de la calculadora...\n");
            break;
        }

        printf("Ingrese el primer número:\n ");
        scanf("%lf", &num1);
        printf("Ingrese el segundo número:\n ");
        scanf("%lf", &num2); 	

        switch (op) {
            case '+':
                resultado = num1 + num2;
                break;
            case '-':
                resultado = num1 - num2;
                break;
            case '*':
                resultado = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    printf("Error: División por cero no permitida.\n");
                    continue;  // Salta la impresión del resultado y vuelve a pedir datos
                }
                break;
            default:
                printf("Operador no válido. Intente de nuevo.\n");
                continue;  // Evita imprimir un resultado incorrecto
        }
        printf("Resultado: %.2lf\n", resultado);
    }
}
