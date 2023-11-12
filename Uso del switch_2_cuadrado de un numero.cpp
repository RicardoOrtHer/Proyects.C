#include<stdio.h>


int cuadrado(int num) {
    return num * num;
}

void menu() {
    printf("\n 1) Calcular el doble de un numero entero.");
    printf("\n 2) Calcular la mitad de un numero entero.");
    printf("\n 3) Calcular el cuadrado de un numero entero.");
    printf("\n 4) Salir.");
    printf("\n\n  Seleccione un numero para empezar: ");
}

int main() {
    char opcion;
    int numero;

    while (1) {
        menu();
        scanf(" %c", &opcion);

        switch (opcion) {
            case '1':
                printf("Ingrese un numero entero: ");
                scanf("%d", &numero);
                printf("El doble de %d es: %d\n", numero, numero * 2);
                break;
            case '2':
                printf("Ingrese un numero entero: ");
                scanf("%d", &numero);
                printf("La mitad de %d es: %.2f\n", numero, (float)numero / 2);
                break;
            case '3':
                printf("Ingrese un numero entero: ");
                scanf("%d", &numero);
                printf("El cuadrado de %d es: %d\n", numero, cuadrado(numero));
                break;
            case '4':
                printf("Saliendo del programa.\n");
                return 0;
            default:
                printf("Opcion invalida. Por favor, ingrese 1, 2, 3 o 4.\n");
        }
    }

    return 0;
}

