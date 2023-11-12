#include<stdio.h>

int main (){
	int a=1;
	int b=2;
	int *pt_a=&a;
	int *pt_b=&b;
	
	*pt_a=73;
	*pt_b=73;
	
	printf("El valor de a es: %d\n", a);
	printf("El valor de a es: %d\n", b);
	return 0;
}

