#include "persona.h"
#include <string.h>
#include <stdlib.h>

user* createUser(char* name, int age){
	user* usuario;
	usuario = malloc(sizeof(usuario));
	int size = strlen(name);
	usuario->nombre = malloc(size);
	strcpy(usuario->nombre, name);
	usuario->edad = age;
	return usuario;
}

int deleteUser(user* usuario){
	free(usuario->nombre);
	free(usuario);
	return 0;
}


