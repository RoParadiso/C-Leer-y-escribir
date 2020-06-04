#include <stdio.h>

int main(){
	int velocidad_contratada = 1;
	float velocidad_relevante = 10.0F;

	printf("Ingrese la velocidad de internet contratada en megas\n");
	scanf("%i", &velocidad_contratada);

	velocidad_relevante = velocidad_contratada / 8;

	printf("\nLa velocidad relevante es de %f Mb/s.", velocidad_relevante)

	return 0;
}