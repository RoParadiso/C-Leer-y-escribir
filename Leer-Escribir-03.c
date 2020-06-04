#include <stdio.h>

const int ALUMNOS = 15;

int main(){
	int presentes = -1;
	int ausentes = 1;
	printf("Ingrese la cantidad de alumnos presentes\n");
	scanf("%i", &presentes);
	ausentes = (ALUMNOS - presentes);
	printf("\nHoy se durmieron %i alumnos", ausentes);
	return 0;
}