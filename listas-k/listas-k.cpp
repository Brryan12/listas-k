#include <iostream>
#include "Lista.h"
int main()
{
	Persona p1(121, "Juan", 20, 'm');
	Persona p2(122, "Maria", 21, 'f');
	Persona p3(123, "Pedro", 18, 'm');
	Persona p4(124, "Luis", 20, 'm');
	Persona p5(125, "Miguel", 29, 'm');
	Persona p6(126, "Arturi", 31, 'm');
	Lista* l1 = new Lista();
	l1->insertarInicio(p1);
	l1->insertarInicio(p2);
	l1->insertarInicio(p3);
	l1->insertarInicio(p4);
	l1->insertarInicio(p5);
	l1->insertarInicio(p6);
	std::cout << l1->toString();
	std::endl(std::cout)<< "<<<<<<<<<Eliminamos el primero>>>>>>> " << std::endl;
	l1->eliminaInicio();
	std::cout << l1->toString() << std::endl << std::endl;
	std::cout << "Cuenta nodos:" << l1->cuentaNodos() << std::endl << std::endl;
	std::cout << "Lista Vacia:" << l1->listaVacia() << std::endl << std::endl;
	std::cout << std::endl << "<Digite Enter>" << std::endl;
	std::cout << std::endl << "<<<<<<<<<Eliminamos lista>>>>>>> " << std::endl;
	delete l1;

}