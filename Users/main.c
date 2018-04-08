#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "user.h"


int main(){

	user* juan = crearUser("Juan", 25);
	user* nahue = crearUser("Nahue", 27);

	printf("\nHola, me llamo %s y mi edad es: %d", juan->name, juan->age);
	printf("\nHola, me llamo %s y mi edad es: %d", nahue->name, nahue->age);

	deleteUser(juan);
	deleteUser(nahue);

	return 0;
}
