#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "persona.h"


int main(void) {

	int a = 0;
	while(a < 500000){
		user* nahue = createUser("Nahue", 27);
		user* juan = createUser("Juan", 30);
		printf("\nHola %s, Tu edad es: %d", nahue->name, nahue->edad);
		printf("\nHola %s, Tu edad es: %d", juan->name, juan->edad);
		deleteUser(nahue);
		deleteUser(juan);
		a++;
	}
	return EXIT_SUCCESS;
}
