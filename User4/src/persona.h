/*
 * persona.h
 *
 *  Created on: 7 abr. 2018
 *      Author: utnso
 */

#ifndef PERSONA_H_
#define PERSONA_H_

typedef struct persona {
	char* nombre;
	int edad;
} persona;

persona* crearPersona(char* nombre, int edad);
int destruirPersona(persona*);


#endif /* PERSONA_H_ */
