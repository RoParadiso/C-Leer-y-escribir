#include <stdio.h>

const int NOMBRE = 10;
const int MAIL = 30;

int main(){
	char nombre[NOMBRE];
	char mail[MAIL];
	printf("Ingrese su nombre\n");
	scanf("%s", &nombre);
	printf("Ingrese su email\n");
	scanf("%s", &mail);
	printf("\nEl mail del usuario %s es: %s", nombre, mail);
	return 0;
}