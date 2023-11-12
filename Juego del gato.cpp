#include<stdio.h>
#include <stdio.h>
#define filas 3
#define columnas 3

void inicializar_tablero(char tablero[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            tablero[i][j] = ' ';
        }
    }
}

void imprimir_tablero(char tablero[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf(" %c ", tablero[i][j]);
            if (j < columnas - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < filas - 1) {
            printf("---+---+---\n");
        }
    }
}


int verificar_ganador(char tablero[filas][columnas], char jugador) {
    
    for (int i = 0; i < filas; i++) {
        if (tablero[i][0] == jugador && tablero[i][1] == jugador && tablero[i][2] == jugador) {
            return 1;  
        }
        if (tablero[0][i] == jugador && tablero[1][i] == jugador && tablero[2][i] == jugador) {
            return 1;  
        }
    }

    
    if (tablero[0][0] == jugador && tablero[1][1] == jugador && tablero[2][2] == jugador) {
        return 1;  
    }
    if (tablero[0][2] == jugador && tablero[1][1] == jugador && tablero[2][0] == jugador) {
        return 1;  
    }

    return 0;  
}

int main() {
    char tablero[filas][columnas];
    char jugador = 'X';
    int fila, columna;
    int jugadas = 0;

    inicializar_tablero(tablero);

    printf("¡Bienvenido al juego de Gato!\n");

    while (31) {
        printf("\n");
        imprimir_tablero(tablero);
        printf("\nTurno del jugador %c\n", jugador);

        printf("Ingresa la columna (0, 1, 2): ");
        scanf("%d", &columna);
        printf("Ingresa la fila (0, 1, 2): ");
        scanf("%d", &fila);
        
        if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas &&
            tablero[fila][columna] == ' ') {
            tablero[fila][columna] = jugador;
            jugadas++;
            if (verificar_ganador(tablero, jugador)) {
                printf("\n¡El jugador %c ha ganado!\n", jugador);
                break;
            }
            if (jugadas == filas * columnas) {
                printf("\n¡Empate!\n");
                break;
            }

            jugador = (jugador == 'X') ? 'O' : 'X';
        } else {
            printf("\nTirada invalida. Intentalo de nuevo.\n");
        }
    }

    imprimir_tablero(tablero);
    return 0;
}

