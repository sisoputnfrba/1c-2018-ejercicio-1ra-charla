#include "user.h"

user * crearUser(char * name, int age){
	user * usuarioNuevo;
	usuarioNuevo = malloc(sizeof(user));
	usuarioNuevo->age = age;
	usuarioNuevo->name = malloc(strlen(name));
	strcpy(usuarioNuevo->name, name);
	return usuarioNuevo;
}

int deleteUser(user* usuario){
	free(usuario->name);
	free(usuario);
	return 1;
}
