#ifndef PERSONA_H_
#define PERSONA_H_

typedef struct persona{
	char* nombre;
	int edad;
} user;

user* createUser(char* name, int age);
int deleteUser(user* usuario);

#endif /* PERSONA_H_ */
