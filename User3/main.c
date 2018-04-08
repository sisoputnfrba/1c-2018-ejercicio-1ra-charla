#include <stdio.h>
#include <string.h>
#include "persona.h"

int main() {
	int a = 1;
	user* nahue = createUser("Nahue", 27);
	user* juan = createUser("Juan Carlos", 34);
	printf("\nHola %s, vos tenes %d anios?\n", nahue->nombre, nahue->edad);
	printf("\nHola %s, vos tenes %d anios?\n", juan->nombre, juan->edad);
	deleteUser(nahue);
	deleteUser(juan);
	a++;
}
