#ifndef CABALLERO_H
#define CABALLERO_H
#include <string>
#include "Guerrero.h"
using namespace std;

class Caballero : public Guerrero{
	public:
		Caballero();
		
		void Atacar(Habitante*);
		
		~Caballero();
	protected:
};

#endif
