#include <stdio.h>

const int MARCA = 20;

int main(){
	char marca[MARCA];
	float precio = 1.0F;
	int peso = 2;
	int cantidad = 3; 
	int mascotas = 4;
	int presupuesto = 5;
	
	printf("Ingrese la cantidad de mascotas que posee:\n");
	scanf("%i", &mascotas);
	printf("Ingrese la marca del alimento balanceado:\n");
	scanf("%s", &marca);
	printf("Ingrese la cantidad de bolsas que compra mensualmente\n");
	scanf("%i", &cantidad);
	printf("Ingrese la cantidad de kilos que posee la bolsa:\n");
	scanf("%i", &peso);
	printf("Ingrese el precio de una bolsa de alimento balanceado\n");
	scanf("%f", &precio);

	presupuesto = (cantidad * precio * 12);

	printf("Con %i bolsas de %s de %ikg. para %i animales se gasta $%i en un anio.", cantidad, marca, peso, mascotas, presupuesto);

		return 0;
}