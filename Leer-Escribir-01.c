#include <stdio.h>

int main(){
	int tiempo_tierra = 1;
	int tiempo_gargantua = 2;
	printf("Ingrese los anios transcurridos en el planeta:\n");
	scanf("%i", &tiempo_gargantua);
	(tiempo_tierra = tiempo_gargantua * 7);
	printf("\nHan pasado %i anios Cooper", &tiempo_tierra);
	return 0;
}