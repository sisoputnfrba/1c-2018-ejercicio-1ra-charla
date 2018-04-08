#include <stdlib.h>
#include <string.h>
#include "persona.h"


persona* crearPersona(char* nombre, int edad){
	persona* user;
	user = malloc(sizeof(persona));
	user->edad = edad;
	user->nombre = malloc(strlen(nombre) + 1);
	strcpy(user->nombre, nombre);
	return user;
}

int destruirPersona(persona* user){
	free(user->nombre);
	free(user);
	return 0;
}

