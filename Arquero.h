#ifndef ARQUERO_H
#define ARQUERO_H
#include <string>
#include "Guerrero.h"
using namespace std;

class Arquero : public Guerrero{
	public:
		Arquero();
		
		void Atacar(Habitante*);
		
		~Arquero();
	protected:
};

#endif
