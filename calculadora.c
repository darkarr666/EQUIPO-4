#include <stdio.h>

void main() {
    char op;
    double num1, num2, resultado;
    
    while (1) {
        printf("Ingrese una operación (+, -, *, /): ");
        scanf(" %c", &op);
        printf("Ingrese dos números: ");
        scanf("%lf %lf", &num1, &num2);

        switch (op) {
            
        }
        printf("Resultado: %.2lf\n", resultado);
    }
}
