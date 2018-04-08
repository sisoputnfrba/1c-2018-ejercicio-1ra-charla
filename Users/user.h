/*
 * user.h
 *
 *  Created on: 7 abr. 2018
 *      Author: utnso
 */

#ifndef USER_H_
#define USER_H_

typedef struct persona{
	char * name;
	int age;
} user;

user * crearUser(char * name, int age);
int deleteUser(user* usuario);

#endif /* USER_H_ */
