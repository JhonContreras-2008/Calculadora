#include <stdio.h>
#include <math.h>

int main(){
    // Definir parametros
    double num1,num2;
    int opcion;
    
    // Ingresar parametros
    printf("Ingrese el primer parametro: ");
    scanf("%lf", &num1);
    printf("Ingrese el segundo parametro: ");
    scanf("%lf", &num2);
    
    while (opcion!=8)
    {
        // Mostrar menu opciones
        printf("Seleccione la operacion a realizar: \n");
        printf("1. Suma \n");
        printf("2. Resta \n");
        printf("3. Multiplicacion \n");
        printf("4. Division \n");
        printf("5. Potencia \n");
        printf("6. Comparación (mayor, menor, igual)\n");
        printf("7. Imprimir rango entre ambos números\n");
        printf("8. Salir\n");
        printf("Elija una opción (1-8): ");
        scanf("%d", &opcion);

        // Realizar operacion
        switch (opcion) {
            case 1:
                printf("Resultado: %lf\n", num1+num2);
                printf('\n');
                break;
            case 2:
                printf("Resultado: %lf\n", num1 - num2);
                printf('\n');
                break;
            case 3:
                printf("Resultado: %lf\n", num1 * num2);
                printf('\n');
                break;
            case 4:
                if (num2 != 0) {
                    printf("Resultado: %lf\n", num1 / num2);
                    printf('\n');
                } else {
                    printf("Error: División por cero no permitida.\n");
                    printf('\n');
                }
                break;
            case 5:
                printf("Resultado: %lf\n", pow(num1, num2));
                printf('\n');
                break;
            case 6:
                if (num1 > num2) {
                    printf("%lf es mayor que %lf\n", num1, num2);
                } else if (num1 < num2) {
                    printf("%lf es menor que %lf\n", num1, num2);
                } else {
                    printf("%lf es igual a %lf\n", num1, num2);
                }
                printf('\n');
                break;
            case 7:
                printf("Rango entre %lf y %lf:\n", num1, num2);
                for (int i = (int) fmin(num1, num2); i <= (int)fmax(num1, num2); i++) {
                    printf("%d ", i);
                }
                printf("\n");
                printf('\n');
                break;
            case 8:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida. Por favor seleccione una opción entre 1 y 8.\n");
        }
    }
    return 0;
}
