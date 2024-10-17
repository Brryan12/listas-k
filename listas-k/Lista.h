#pragma once
#include "Persona.h"
class Lista
{
private:
	struct nodo
	{
		Persona perso;
		nodo* siguiente;
	};
	nodo* actual;
	nodo* primero;
	
public:
	Lista();
	void insertarInicio(Persona p);
	std::string toString();
	int cuentaNodos();
	bool listaVacia();
	bool eliminaInicio();
	virtual ~Lista();
};

