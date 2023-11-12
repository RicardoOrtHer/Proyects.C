#include<stdio.h>

int main() {
	
	int i;
	float costos [10];
	float total = 0;
	
	for(int i=0; i<10; i++){
		printf("Ingrese el costo del producto %d: $", i + 1);
		scanf("%f", &costos[i]);
		
		total +=costos[i];
		
	}
	
	printf("\nCostos de los productos\n");
	for(int i=0; i<10; i++){
		printf("Producto %d: $\n", i + 1, costos [i]);
		
		}
		
		printf("\nTotal de gastos: $%.2f\n", total);
		return 0;
}
