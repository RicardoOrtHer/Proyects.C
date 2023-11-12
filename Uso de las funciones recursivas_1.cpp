#include<stdio.h>

int ponerAsteriscos(int i, int j);
int main(){
	int columna = 0;
	int fila = 0;
	printf("Ingrese el numero de columnas\n");
	scanf("%d", &columna);
	printf("Ingrese el numero de filas\n");
	scanf("%d", &fila);
	ponerAsteriscos(columna,fila);
	return 0;
}

int ponerAsteriscos(int c, int f){
	int columna = c;
	int fila = f;
	int i,j;
	for(i=1; i<=c; i++){
		for(j=1; j<=f; j++){
			printf("*");
		}
		printf("\n");
	}
}
