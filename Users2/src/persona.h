/*
 * persona.h
 *
 *  Created on: 7 abr. 2018
 *      Author: utnso
 */

#ifndef PERSONA_H_
#define PERSONA_H_

typedef struct persona {
	char * name;
	int edad;
} user;

user* createUser(char* name, int edad);
int deleteUser(user* usuario);

#endif /* PERSONA_H_ */
