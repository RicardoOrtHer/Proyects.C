#include <stdio.h>
// Ricardo Ortega Herrera
void ordenarLetras(char *arr, int tam) {
    int i, j;
    char temp;
    for (i = 0; i < tam - 1; i++) {
        for (j = i + 1; j < tam; j++) {
            if (*(arr + i) > *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}
int main() {
    char cadena[30];
    printf("Ingresa una cadena de texto:");
    scanf("%s", cadena);
    int tam = 0;
    while (cadena[tam] != '\0') {
        tam++;
    }
    ordenarLetras(cadena, tam);
    printf("Cadena ordenada:%s\n", cadena);
    return 0;
}
