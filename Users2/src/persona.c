#include "persona.h"

user* createUser(char* name, int edad){

	user* genericUser = malloc(sizeof(user));
	genericUser->edad = edad;
	genericUser->name = malloc(strlen(name)+1);
	memcpy(genericUser->name, name, strlen(name));

	return genericUser;
}

int deleteUser(user* usuario){
	free(usuario->name);
	//free(usuario);
	return 1;
}
