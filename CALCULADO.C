#include <stdio.h>
#include <math.h>

int main(){
    // Definir parametros
    int num1,num2;
    int opcion;
    
    // Ingresar parametros
    printf("Ingrese el primer parametro");
    scanf("%lf", &num1);
    printf("Ingrese el segundo parametro");
    scanf("%lf", &num2);

    // Mostrar menu opciones
    printf("Seleccione la operacion a realizar: \n");
    printf("1. Suma \n");
    printf("2. Resta \n");
    printf("3. Multiplicacion \n");
    printf("4. Division \n");
    printf("5. Potencia \n");
    printf("6. Cociente (división entera)\n");
    printf("7. Comparación (mayor, menor, igual)\n");
    printf("8. Imprimir rango entre ambos números\n");
    printf("Elija una opción (1-8): ");
    scanf("%d", &opcion);
}
