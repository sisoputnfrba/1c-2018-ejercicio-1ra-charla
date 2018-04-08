#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"



int main(void) {

	int a = 0;
		persona* jose = crearPersona("Jose", 45);
		printf("Hola %s, tu edad es: %d", jose->nombre, jose->edad);
		a++;
		destruirPersona(jose);

	return EXIT_SUCCESS;
}
