//------------------------Persona.cpp-------------------------
#include "Persona.h"

Persona::Persona(void) {
	id = 0;
	nombre = "sin definir";
	edad = 0;
	std::cout << "Se ha creado un Persona" << std::endl;
}


Persona::Persona(int id, std::string nom, int ed, char ge)
{
	this->id = id;
	this->nombre = nom;
	this->edad = ed;
	this->genero = ge;
	std::cout << "Se ha creado una Persona" << std::endl;
}
int Persona::getId() { return id; }
void Persona::setId(int id) { this->id = id; }
void Persona::setNombre(std::string nom) { nombre = nom; }
std::string Persona::getNombre() { return nombre; }

void Persona::setEdad(int e) { edad = e; }
int Persona::getEdad() { return edad; }
char Persona::getGenero() { return genero; }

void Persona::setGenero(char g) { this->genero = g; }

std::string Persona::toString() {
	std::stringstream s;
	s << " ------------" << std::endl;
	s << "id:  " << id << std::endl;
	s << "Nombre:  " << nombre << std::endl;
	s << "edad:" << edad << std::endl;
	return s.str();
}

Persona::~Persona(void) {  }


