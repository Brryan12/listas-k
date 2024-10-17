#include "Lista.h"

Lista::Lista()
{
	primero = NULL;
	actual = NULL;
}

void Lista::insertarInicio(Persona p) {
	actual = new nodo{ p, NULL };
	actual->siguiente=primero;
	primero = actual;
}

std::string Lista::toString() {
	actual = primero;
	std::stringstream s;
	while (actual != NULL) {
		s << actual->perso.toString();
		actual = actual->siguiente;
	}
	return s.str();
}

int Lista::cuentaNodos() {
	actual = primero;
	int can = 0;
	while (actual != NULL) {
		can++;
		actual = actual->siguiente;
	}
	return can;
}

bool Lista::listaVacia() {
	return  (primero == NULL) ? true : false;
}

bool Lista::eliminaInicio() {
	if (primero == NULL) {  // caso 1: la lista esta vacia
		return false;
	}
	else { // caso 2: la lista no esta vacia
		actual = primero;
		primero = primero->siguiente;
		delete actual;
		return true;
	}
}

Lista::~Lista() {
	while (primero != NULL) { //eliminamos siempre el primero
		actual = primero;
		primero = primero->siguiente;
		delete actual;
	}
}