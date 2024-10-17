//------------------------Persona.h-------------------------
#pragma once
#include <iostream>
#include<sstream>

class Persona
{
private:
	int id;
	std::string nombre;
	int edad;
	char genero;
public:
	Persona(void);
	Persona(int, std::string, int, char);
	int getId();
	void setId(int);
	void setNombre(std::string);
	std::string getNombre();
	void setEdad(int);
	int getEdad();
	char getGenero();
	void setGenero(char);
	std::string toString();
	~Persona(void);
};



